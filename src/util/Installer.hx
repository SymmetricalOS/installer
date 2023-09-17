package util;

class Installer {
	public static function partitionDrives() {
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mklabel gpt");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mkpart primary boot 0 512M");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mkpart primary root 512M 100%");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " set boot boot on");
		Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " set root root on");
	}

	public static function formatDrives() {
		Sys.command("mkfs.ext4 /dev/" + Config.LOCAL_PARTITION_LAYOUT_BOOT);
		Sys.command("mkfs.ext4 /dev/" + Config.LOCAL_PARTITION_LAYOUT_MAIN);
	}

	public static function mountDrives() {
		Sys.command("mount /dev/" + Config.LOCAL_PARTITION_LAYOUT_MAIN + " /mnt");
		Sys.command("mount /dev/" + Config.LOCAL_PARTITION_LAYOUT_BOOT + " /mnt/boot");
	}

	public static function unmountDrives() {
		Sys.command("umount -R /mnt");
	}

	public static function installBaseSystem() {
		Sys.command("/tmp/installer/scripts/basic-install.sh");
	}

	public static function installPackages() {}

	public static function configureGrub() {}

	public static function configureFstab() {}

	public static function copyFsroot() {}
}
