package util;

import sys.FileSystem;

class Installer {
	public static function partitionDrives() {
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mklabel gpt");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mkpart primary 0 512M");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mkpart primary 512M 100%");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " set 1 boot on");
	}

	public static function formatDrives() {
		Sys.command("mkfs.ext4 /dev/" + Config.LOCAL_PARTITION_LAYOUT_BOOT);
		Sys.command("mkfs.ext4 /dev/" + Config.LOCAL_PARTITION_LAYOUT_MAIN);
	}

	public static function mountDrives() {
		FileSystem.createDirectory("/mnt/boot/");
		Sys.command("mount /dev/" + Config.LOCAL_PARTITION_LAYOUT_MAIN + " /mnt");
		Sys.command("mount /dev/" + Config.LOCAL_PARTITION_LAYOUT_BOOT + " /mnt/boot");
	}

	public static function configureFstab() {
		Sys.command("genfstab -U /mnt >> /mnt/etc/fstab");
	}

	public static function copyFsroot() {
		Sys.command("cp -r /tmp/installer/scripts /mnt/tmp/installer");
		Sys.command("cp -r /tmp/installer/sysrootfs /mnt");
	}

	public static function installBaseSystem() {
		Sys.command("/tmp/installer/scripts/basic-install.sh");
	}

	public static function installPackages() {
		Sys.command("arch-chroot /mnt /tmp/installer/scripts/install-packages.sh");
	}

	public static function configureGrub() {
		Sys.command("arch-chroot /mnt grub-install /dev/" + Config.LOCAL_PARTITION_DISK);
		Sys.command("arch-chroot /mnt grub-mkconfig -o /boot/grub/grub.cfg");
	}

	public static function unmountDrives() {
		Sys.command("umount -R /mnt");
	}
}
