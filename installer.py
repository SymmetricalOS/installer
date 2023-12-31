import os
import re
import tkinter as tk
import tkinter.ttk as ttk
import threading as th
import subprocess as sp
import requests as r
import psutil as ps
import time

offline = os.path.exists("/etc/installer/offline")

bigger = True

prod = True

font = ("Legato Sans", 12)
fontbig = ("Legato Sans", 33)
font2 = ("Legato Sans", 22)
fontbig2 = ("Legato Sans", 53)
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
            os.system(command, check=True)
        except:
            return False
    return True


def has_number_at_end(input_string):
    # Define a regular expression pattern to match a number at the end of the string
    pattern = r"\d$"

    # Use re.search() to find the pattern at the end of the string
    return re.search(pattern, input_string)


def checkthing(e: str):
    if e.startswith("nvme"):
        if e[5].startswith("n"):
            if not e[0:-1].endswith("p"):
                return True
    else:
        if e.startswith("sd") or e.startswith("hd") or e.startswith("vd"):
            if not has_number_at_end(e):
                return True
    return False


class Overview(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent, cursor="arrow")
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
                        "\nSoon, you will be able to use a wireless network in the installer."
                        if len(self.neteth) > 0 and len(self.netwire) > 0
                        else "\n"
                    )
                    + (
                        "If a wired connection is available, please use it. Otherwise, wait for an update to the installer.\nThank you for understanding."
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
            self, text="Back", command=lambda: controller.show_frame(Overview)
        )
        back.place(x=10, y=120)
        next.place(x=110, y=120)


class Progressing(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        progress_total_var = 27
        self.progress_amount = tk.IntVar(self, 0)
        self.progress_total = tk.IntVar(self, progress_total_var)
        self.label_text = tk.StringVar(self, "Installation will begin shortly...")
        lb = ttk.Label(self, text="Installing Symmetrical OS", font=fontbig)
        lb.place(x=10, y=10)
        lb2 = ttk.Label(self, text="This may take a while.", font=font)
        lb2.place(x=10, y=110)
        lb3 = ttk.Label(self, textvariable=self.label_text, font=font)
        lb3.place(x=10, rely=0.8, y=-80)
        prog = ttk.Progressbar(
            self, variable=self.progress_amount, maximum=progress_total_var
        )
        prog.place(relx=0.05, rely=0.8, relwidth=0.9)

    def start_the_thread(self):
        self.thr = th.Thread(target=self.commands)
        self.thr.start()

    def commands(self):
        if prod == False:
            return

        self.label_text.set("Preparing mirrors")
        os.system(
            'echo -e "\n[symmos]\nServer = https://symmetricalos.github.io/packages/$arch\nSigLevel = Optional TrustAll\n" >> /etc/pacman.conf'
        )
        os.system("pacman -Sy --noconfirm")
        self.label_text.set("Creating GPT partition table")
        os.system(
            f"/usr/bin/parted /dev/{choices['disk']} mklabel gpt ---pretend-input-tty <<EOF\ny\nEOF"
        )
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Creating partitions")
        os.system(f"/usr/bin/parted /dev/{choices['disk']} mkpart primary 1024M 1536M")
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system(f"/usr/bin/parted /dev/{choices['disk']} mkpart primary 1536M 100%")
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system(f"/usr/bin/parted /dev/{choices['disk']} set 1 boot on")
        self.progress_amount.set(self.progress_amount.get() + 1)

        bootpart = choices["disk"] + "1"
        rootpart = choices["disk"] + "2"
        if choices["disk"].startswith("nvme"):
            bootpart = choices["disk"] + "p1"
            rootpart = choices["disk"] + "p2"
        self.label_text.set("Formatting partitions")
        os.system("/usr/bin/mkfs.fat -F 32 /dev/" + bootpart)
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system("/usr/bin/mkfs.ext4 /dev/" + rootpart)
        self.progress_amount.set(self.progress_amount.get() + 1)

        self.label_text.set("Mounting partitions")
        os.system("/usr/bin/mount /dev/" + rootpart + " /mnt")
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system("/usr/bin/mount --mkdir /dev/" + bootpart + " /mnt/boot")
        self.progress_amount.set(self.progress_amount.get() + 1)

        self.label_text.set("Installing system")
        if not offline:
            os.system(
                'pacstrap /mnt linux linux-firmware symmos symmos-boot symmos-networking symmos-essentials --overwrite "*"'
            )
            # os.system(
            #     "pacstrap /mnt linux linux-firmware base base-devel grub efibootmgr networkmanager iwd"
            # )
        else:
            os.system("tar -zxvf /etc/installer/offline/sys.tar.gz -C /")

        of = ""
        if offline:
            of = "offline/"

        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Generating fstab")
        os.system("genfstab -U /mnt >> /mnt/etc/fstab")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Copying files")
        os.system("mkdir -p /mnt/etc/installer/scripts")
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system("cp -r /etc/installer/scripts /mnt/etc/installer/")
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system("cp -r /etc/installer/sysrootfs /mnt")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Creating initramfs")
        os.system("arch-chroot /mnt mkinitcpio -P")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Copying files")
        os.system("cp -r /etc/installer/sysrootfs/* /mnt/")
        if not offline:
            os.system("arch-chroot /mnt pacman -Syy")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Installing boot loader")
        os.system(
            "arch-chroot /mnt grub-install --target=x86_64-efi --efi-directory=/boot"
        )
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Configuring boot loader")
        os.system("arch-chroot /mnt grub-mkconfig -o /boot/grub/grub.cfg")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Generating pacman keyring")
        os.system(f"arch-chroot /mnt pacman-key --init")
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system(f"arch-chroot /mnt pacman-key --populate")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Preparing scripts")
        os.system(f"arch-chroot /mnt chmod +x /etc/installer/{of}scripts/*")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Installing graphical environment")
        if not offline:
            os.system(f"arch-chroot /mnt /etc/installer/{of}scripts/xfce.sh")
            if choices["loginscr"] == "lightdm":
                os.system(f"arch-chroot /mnt /etc/installer/{of}scripts/lightdm.sh")
            else:
                os.system(f"arch-chroot /mnt /etc/installer/{of}scripts/sddm.sh")
        else:
            os.system("mkdir -p /mnt/etc/installer/pkgs")
            os.system(
                "tar xzf /etc/installer/offline/graphical.tar.gz -C /mnt/etc/installer/pkgs/"
            )
            os.system("arch-chroot /mnt /etc/installer/offline/install.sh")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Creating user accounts")
        sp.run(
            f"arch-chroot /mnt passwd root",
            stdout=sp.PIPE,
            input=f"{choices['password']}\n{choices['password']}\n".encode("ascii"),
            shell=True,
        )
        self.progress_amount.set(self.progress_amount.get() + 1)
        os.system(
            "arch-chroot /mnt useradd -m -s /bin/bash -G wheel,storage,power "
            + choices["username"]
        )
        self.progress_amount.set(self.progress_amount.get() + 1)
        sp.run(
            f"arch-chroot /mnt passwd {choices['username']}",
            stdout=sp.PIPE,
            input=f"{choices['password']}\n{choices['password']}\n".encode("ascii"),
            shell=True,
        )
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Enabling services")
        os.system("arch-chroot /mnt systemctl enable NetworkManager.service")
        self.progress_amount.set(self.progress_amount.get() + 1)
        self.label_text.set("Cleaning up")
        os.system("umount -R /mnt")
        self.progress_amount.set(self.progress_amount.get() + 1)
        for i in range(10):
            self.label_text.set(
                f"Finished! Rebooting in {10-i}. Please remove the installation medium."
            )
            time.sleep(1)
        self.label_text.set("Rebooting")
        os.system("reboot")


class Confirm(tk.Frame):
    def __init__(self, parent, controller):
        tk.Frame.__init__(self, parent)
        lb = ttk.Label(self, text="Confirm Settings", font=fontbig)
        lb.place(x=10, y=10)

        def go_go_go():
            controller.frames[Progressing].start_the_thread()
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
            text="i3 (advanced users only, coming soon)",
            value="i3",
            command=lambda: print(windowman.get()),
            state=tk.DISABLED,
        )

        windowman.set("xfwm")

        xfce.place(x=10, y=160)
        i3.place(x=10, y=180)

        lb3 = ttk.Label(self, text="Login Screen:", font=font)
        lb3.place(x=10, y=200)

        lightdm = ttk.Radiobutton(
            self,
            variable=login,
            text="LightDM (lightweight)",
            value="lightdm",
            command=lambda: print(login.get()),
        )
        sddm = ttk.Radiobutton(
            self,
            variable=login,
            text="SDDM (nice looking)",
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


class Progress(ttk.Frame):
    def __init__(self, parent, controller):
        ttk.Frame.__init__(self, parent, relief="sunken")
        all = (
            (
                "Overview",
                "Internet",
                "Partitioning",
                "Users",
                "Desktop",
                "Confirm",
                "Installation",
            )
            if not offline
            else (
                "Overview",
                "Partitioning",
                "Users",
                "Desktop",
                "Confirm",
                "Installation",
            )
        )
        self.frames = {}
        self.labels = {}
        for item in all:
            self.frames[item] = ttk.Frame(
                self, relief="groove", style="unselected.TFrame"
            )
            self.labels[item] = ttk.Label(
                self.frames[item],
                text=item,
                font=font,
                justify="center",
                style="unselected.TLabel",
            )
            self.labels[item].place(relx=0.5, rely=0.5, anchor="center")
        for i in range(len(all)):
            fac = len(all)
            width = 1 / fac
            x = i / fac + width / 2
            width = width * 0.95
            self.frames[all[i]].place(
                anchor="center", relx=x, rely=0.5, relwidth=width, relheight=0.9
            )


class installer(tk.Tk):
    def __init__(self, *args, **kwargs):
        tk.Tk.__init__(self, *args, **kwargs)

        self.title("Symmetrical OS Installer")
        self.geometry(f"{self.winfo_screenwidth()}x{self.winfo_screenheight()}")

        s = ttk.Style(self)
        s.configure("unselected.TFrame", background="white")
        s.configure("selected.TFrame", background="blue")
        s.configure("unselected.TLabel", background="white")
        s.configure("selected.TLabel", background="blue")

        # the top part
        self.other = tk.Frame(self, height=(75 if not bigger else 125))
        self.other.pack(side="top", fill="x", expand=False)

        self.prog = Progress(self.other, self)
        self.prog.place(x=0, y=0, relwidth=1, relheight=1)

        # creating a container
        container = tk.Frame(self)
        container.pack(side="top", fill="both", expand=True)
        # container.place(relx=0, rely=0, relwidth=1, relheight=1) # remnant from before we implemented the progress bar

        container.grid_rowconfigure(1, weight=4)
        container.grid_rowconfigure(0, weight=1)
        container.grid_columnconfigure(0, weight=1)

        self.frames = {}

        for F in things:
            frame = F(container, self)

            self.frames[F] = frame

            frame.grid(row=0, column=0, sticky="nsew")
            frame.place(relx=0, rely=0, relwidth=1, relheight=1)

        self.show_frame(Overview)

    # to display the current frame passed as
    # parameter
    def show_frame(self, cont):
        frame = self.frames[cont]
        frame.tkraise()
        nice = {
            Overview: "Overview",
            Network: "Internet",
            Partitioning: "Partitioning",
            Users: "Users",
            Desktop: "Desktop",
            Confirm: "Confirm",
            Progressing: "Installation",
        }
        for key in list(nice.values()):
            self.prog.frames[key].configure(style="unselected.TFrame")
            self.prog.labels[key].configure(style="unselected.TLabel")
        self.prog.frames[nice[cont]].configure(style="selected.TFrame")
        self.prog.labels[nice[cont]].configure(style="selected.TLabel")


def run(command):
    rc = os.system(command)
    if rc.returncode != 0:
        sp.run("umount -R /mnt")
    return rc.returncode == 0


uhh = installer()
uhh.mainloop()
