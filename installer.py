import subprocess as sp
import requests as r
import tkinter as tk
import tkinter.ttk as ttk
import threading as th
import psutil as ps
import os

offline = os.path.exists("/etc/installer/offline")

bigger = True

prod = False

font = ("Verdana", 14)
fontbig = ("Verdana", 35)
font2 = ("Verdana", 24)
fontbig2 = ("Verdana", 55)
if bigger:
    font = font2
    fontbig = fontbig2

choices = {
    "disk": "",
    "disktype": "",
    "disktypeg": "",
    "username": "",
    "windowman": "",
    "loginscr": "",
}


def run_commands_file(filename):
    with open(filename) as f:
        data = f.read().split("\n")
    for command in data:
        try:
            sp.run(command, check=True)
        except:
            return False
    return True


def checkthing(e: str):
    if e.startswith("nvme"):
        if not "p" in e and "n" in e:
            return True
        else:
            if not e[-1] in ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]:
                return False
        return False


class Progress(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        lb = ttk.Label(self, text="Example progress stuff", font=fontbig)
        lb.place(x=0, y=0)


class Overview(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        # welcometxt = "Welcome to the Symmetrical OS installer!\nAt the top, you will see the progress display.\nThis will show you what you are going to be setting up during the installation process.\nPress Next to start the setup."
        welcometxt = "Welcome to the Symmetrical OS installer!\nAfter this installer is complete, you will be able to use Symmetrical OS.\nPress Next to start the setup."

        def check():
            return len([x for x in os.listdir("/dev/") if checkthing(x)]) > 0

        lb = ttk.Label(self, text="Hello!", font=fontbig)
        if check() or not prod:
            lb2 = ttk.Label(self, text=welcometxt, font=font)
            next = ttk.Button(
                self,
                text="Next",
                command=lambda: controller.show_frame(
                    Network if not offline else Partitioning
                ),
            )
        else:
            welcometxt = "We're sorry, but your system does not have any available drives to install to.\nPlease shut down your system install or attach a disk drive.\nWhen a disk drive becomes available and your system is rebooted, the installation can continue."
            lb2 = ttk.Label(self, text=welcometxt, font=font)
            next = ttk.Button(
                self,
                text="Shut Down",
                command=((lambda: os.system("shutdown now")) if prod else ""),
            )
        lb.place(x=10, y=10)
        lb2.place(x=10, y=(60 if not bigger else 90))
        next.place(x=10, y=(150 if not bigger else 225))


class Network(tk.Frame):
    def __init__(self, parent, controller):
        def check_internet():
            try:
                r.get("https://symmetricalos.github.io")
                return True
            except r.ConnectTimeout:
                return False

        def check_next():
            if check_internet():
                controller.show_frame(Partitioning)

        net = ps.net_if_addrs()
        self.neteth = [x for x in net if x.startswith("e")]
        self.netwire = [x for x in net if x.startswith("w")]
        tk.Frame.__init__(self, parent)
        message = (
            (
                (
                    (
                        "Ethernet connectability detected. If you have an ethernet cable, please insert it."
                        if len(self.neteth) > 0
                        else ""
                    )
                    + (
                        "\nAlternatively, you can connect to a Wi-Fi network below."
                        if len(self.neteth) > 0 and len(self.netwire) > 0
                        else "\n"
                    )
                    + (
                        "Wireless connectability detected. Please connect to a Wi-Fi network below."
                        if len(self.neteth) == 0 and len(self.netwire) > 0
                        else ""
                    )
                    if not len(self.neteth) == 0 and len(self.netwire) == 0
                    else "Your computer appears to not support networking. Please use the offline installer until the issue is resolved."
                )
                if not check_internet()
                else 'You\'re already connected! Press "Next" to continue.'
            )
            if not offline
            else "If you're seeing this message, something has gone terribly wrong.\nPlease report this to the developers.\nAlso, remember to mention the number 295."
        )
        lb = ttk.Label(
            self, text=("Internet" if not offline else "That's odd."), font=fontbig
        )
        lb.place(x=10, y=10)
        lb2 = ttk.Label(self, text=message, font=font)
        lb2.place(x=10, y=(60 if not bigger else 80))
        next = ttk.Button(self, text="Next", command=check_next)
        back = ttk.Button(
            self, text="Back", command=lambda: controller.show_frame(Partitioning)
        )
        back.place(x=10, y=120)
        next.place(x=110, y=120)


class Progressing(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        lb = ttk.Label(self, text="Installing Symmetrical OS", font=fontbig)
        lb.place(x=10, y=10)
        lb2 = ttk.Label(self, text="This may take a while.", font=font)
        lb2.place(x=10, y=110)
        prog = ttk.Progressbar(self, mode="indeterminate")
        prog.place(relx=0.05, rely=0.8, relwidth=0.9)
        self.thr = th.Thread(target=self.commands)
        self.thr.start()

    def commands(self):
        if not prod:
            return

        sp.call(
            f"parted /dev/{choices.disk} mklabel gpt ---pretend-input-tty <<EOF\ny\nEOF"
        )
        sp.call(f"parted /dev/{choices.disk} mkpart primary 1024M 1536M")
        sp.call(f"parted /dev/{choices.disk} mkpart primary 1536M 100%")
        sp.call(f"parted /dev/{choices.disk} set 1 boot on")

        bootpart = choices.disk + "1"
        rootpart = choices.disk + "2"
        if choices.disk.startswith("nvme"):
            bootpart = choices.disk + "p1"
            rootpart = choices.disk + "p2"
        sp.call(f"mkfs.fat -F 32 /dev/{bootpart}")
        sp.call(f"mkfs.ext4 /dev/{rootpart}")

        sp.call(f"mount /dev/{rootpart} /mnt")
        sp.call(f"mount --mkdir /dev/{bootpart} /mnt/boot")

        if not offline:
            sp.call(
                "pacstrap /mnt kernel kernel-firmware symmos symmos-boot symmos-networking"
            )
        else:
            # TODO
            pass
        sp.call("genfstab -U /mnt >> /mnt/etc/fstab")
        sp.call("mkdir -p /mnt/etc/installer/scripts")
        sp.call("cp -r /etc/installer/scripts /mnt/etc/installer/")
        sp.call("cp -r /etc/installer/sysrootfs /mnt")
        sp.call("arch-chroot /mnt mkinitcpio -P")
        sp.call(
            "arch-chroot /mnt grub-install --target=x86_64-efi --efi-direcotry=/boot"
        )
        sp.call("arch-chroot /mnt grub-mkconfig -o /boot/grub/grub.cfg")
        sp.call("arch-chroot /mnt /etc/installer/scripts/xfce.sh")
        if choices.loginscr == "lightdm":
            sp.call("arch-chroot /mnt /etc/installer/scripts/lightdm.sh")
        else:
            sp.call("arch-chroot /mnt /etc/installer/scripts/sddm.sh")
        sp.call("arch-chroot /mnt echo $password | passwd root --stdin")
        sp.call(
            f"arch-chroot /mnt useradd -m -g users -G wheel,storage,power -s /bin/bash {choices.username}"
        )
        sp.call(
            f"arch-chroot /mnt echo {choices.password} | passwd {choices.username} --stdin"
        )
        sp.call("umount -R /mnt")


class Confirm(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        lb = ttk.Label(self, text="Confirm Settings", font=fontbig)
        lb.place(x=10, y=10)

        def go_go_go():
            controller.show_frame(Progressing)

        self.optionslb = ttk.Label(
            self,
            text="Well this isn't meant to happen.\nIf you take this up with the developers, mention the number 46.",
            font=font,
        )
        self.optionslb.place(x=10, y=80)

        next = ttk.Button(self, text="Confirm", command=go_go_go)
        back = ttk.Button(
            self, text="Back", command=lambda: controller.show_frame(Desktop)
        )
        back.place(x=10, y=300)
        next.place(x=110, y=300)


class Users(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)

        def check_next():
            un = uname_entry.get()
            ps = passw_entry.get()
            ps2 = confirm_entry.get()
            if ps == ps2 and ps != "" and un != "":
                choices["username"] = un
                choices["password"] = ps
                controller.show_frame(Desktop)

        lb = ttk.Label(self, text="Users", font=fontbig)
        lb.place(x=10, y=10)

        uname_entry = ttk.Entry(self)
        passw_entry = ttk.Entry(self, show="•")
        confirm_entry = ttk.Entry(self, show="•")
        is_sudo = ttk.Checkbutton(self)

        uname_lb = ttk.Label(self, text="Username", font=font)
        passw_lb = ttk.Label(self, text="Password", font=font)
        confirm_lb = ttk.Label(self, text="Confirm Password", font=font)
        sudo_lb = ttk.Label(self, text="Administrator?", font=font)

        next = ttk.Button(self, text="Next", command=check_next)
        back = ttk.Button(
            self, text="Back", command=lambda: controller.show_frame(Partitioning)
        )

        uname_entry.place(x=10, y=100)
        passw_entry.place(x=10, y=130)
        confirm_entry.place(x=10, y=160)
        if bigger:
            is_sudo.place(x=10, y=190, width=35, height=35)
        else:
            is_sudo.place(x=10, y=190)

        uname_lb.place(x=210, y=100)
        passw_lb.place(x=210, y=130)
        confirm_lb.place(x=210, y=160)
        sudo_lb.place(x=(40 if bigger else 25), y=190)

        back.place(x=10, y=240)
        next.place(x=110, y=240)


class Desktop(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        windowman = tk.StringVar(value="xfwm")
        login = tk.StringVar(value="lightdm")

        def check_next():
            choices["windowman"] = windowman.get()
            choices["loginscr"] = login.get()
            print(windowman.get(), login.get())
            controller.frames[Confirm].optionslb.configure(
                text=f"Selected options:\nInstalling to {choices['disk']}\nInstall type: {choices['disktypeg']}\nUsername: {choices['username']}\nWindow manager: {'XFWM' if choices['windowman'] == 'xfwm' else 'i3'}\nLogin Screen: {'LightDM' if choices['loginscr'] == 'lightdm' else 'SDDM'}"
            )
            controller.show_frame(Confirm)

        lb = ttk.Label(self, text="Desktop", font=fontbig)
        lb.place(x=10, y=10)
        lb2 = ttk.Label(self, text="Window Manager:", font=font)
        lb2.place(x=10, y=120)

        xfce = ttk.Radiobutton(
            self,
            variable=windowman,
            text="XFWM",
            value="xfwm",
            command=lambda: print(windowman.get()),
        )
        i3 = ttk.Radiobutton(
            self,
            variable=windowman,
            text="i3",
            value="i3",
            command=lambda: print(windowman.get()),
        )

        windowman.set("xfwm")

        xfce.place(x=10, y=160)
        i3.place(x=10, y=180)

        lb3 = ttk.Label(self, text="Login Screen:", font=font)
        lb3.place(x=10, y=200)

        lightdm = ttk.Radiobutton(
            self,
            variable=login,
            text="LightDM",
            value="lightdm",
            command=lambda: print(login.get()),
        )
        sddm = ttk.Radiobutton(
            self,
            variable=login,
            text="SDDM",
            value="sddm",
            command=lambda: print(login.get()),
        )

        login.set("lightdm")

        lightdm.place(x=10, y=240)
        sddm.place(x=10, y=260)

        # xfwm_lb = ttk.Label(self, text="XFWM (Recommended)", font=font)
        # i3_lb = ttk.Label(self, text="i3", font=font)

        next = ttk.Button(self, text="Next", command=check_next)
        back = ttk.Button(
            self, text="Back", command=lambda: controller.show_frame(Users)
        )

        windowman.set("xfwm")
        login.set("lightdm")

        back.place(x=10, y=280)
        next.place(x=110, y=280)


class Partitioning(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        lb = ttk.Label(self, text="Partitioning", font=fontbig)
        lb2 = ttk.Label(
            self,
            text="Choose a disk to partition and how you would like to install it.\nPress Next to confirm your selection.",
            font=font,
        )
        stuffs = os.listdir("/dev/")

        disks = [x for x in stuffs if checkthing(x)]

        def set_things(disk, choice):
            print(disk, choice)
            if disk != "" and choice != "":
                choices["disk"] = disk
                choices["disktype"] = 0 if choice.startswith("Erase") else 1
                choices["disktypeg"] = choice
                controller.show_frame(Users)

        if len(disks) > 0 or not prod:
            chosen = tk.StringVar()
            hmm = tk.StringVar()
            disk = ttk.Combobox(self, textvariable=chosen)
            options = ttk.Combobox(self, textvariable=hmm)
            options["values"] = [
                "Install Symmetrical OS alongside the currently installed OS",
                "Erase the disk and install Symmetrical OS",
            ]
            options.place(x=10, y=(140 if not bigger else 230))
            disk["values"] = disks
            disk.place(x=10, y=(110 if not bigger else 200))
            next = ttk.Button(
                self, text="Next", command=lambda: set_things(chosen.get(), hmm.get())
            )
            next.place(x=110, y=(170 if not bigger else 265))
            back = ttk.Button(
                self,
                text="Back",
                command=lambda: (
                    controller.show_frame(Network if not offline else Overview)
                ),
            )
            back.place(x=10, y=(170 if not bigger else 265))
        else:
            uhoh = ttk.Label(
                self,
                text="No usable disks are available.\nPlease install a disk drive and restart the installer.",
                font=font,
            )
            uhoh.place(x=10, y=(110 if not bigger else 200))
            shutdown = ttk.Button(
                self,
                text="Shut Down",
                command=((lambda: os.system("shutdown now")) if prod else ""),
            )
            shutdown.place(x=10, y=(170 if not bigger else 245))
        lb.place(x=10, y=10)
        lb2.place(x=10, y=(60 if not bigger else 90))


things = (Overview, Network, Partitioning, Users, Desktop, Confirm, Progressing)


class installer(tk.Tk):
    def __init__(self, *args, **kwargs):
        tk.Tk.__init__(self, *args, **kwargs)

        self.title("Symmetrical OS Installer")
        self.geometry("800x600")

        # the top part
        # other = tk.Frame(self, height=(75 if not bigger else 125))
        # other.pack(side="top", fill="x", expand=False)

        # prog = Progress(other, self)
        # prog.place(x=0, y=0, relwidth=1, relheight=1)

        # creating a container
        container = tk.Frame(self)
        container.pack(side="top", fill="both", expand=True)
        # container.place(relx=0, rely=0, relwidth=1, relheight=1)

        # container.grid_rowconfigure(1, weight=4)
        # container.grid_rowconfigure(0, weight=1)
        # container.grid_columnconfigure(0, weight=1)

        self.frames = {}

        for F in things:
            frame = F(container, self)

            self.frames[F] = frame

            # frame.grid(row=0, column=0, sticky="nsew")
            frame.place(relx=0, rely=0, relwidth=1, relheight=1)

        self.show_frame(Overview)

    # to display the current frame passed as
    # parameter
    def show_frame(self, cont):
        frame = self.frames[cont]
        frame.tkraise()


def run(command):
    rc = sp.run(command)
    if rc.returncode != 0:
        sp.run("umount -R /mnt")
    return rc.returncode == 0


uhh = installer()
uhh.mainloop()
