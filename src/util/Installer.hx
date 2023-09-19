package util;

import sys.FileSystem;

class Installer {
	public static function addPermissions():Bool {
		if (Sys.command("chmod -R +x /etc/installer/") == 0)
			return true;
		return false;
	}

	public static function partitionDrives():Bool {
		if (Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mklabel gpt ---pretend-input-tty <<EOF\ny\nEOF") == 0) {
			if (Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mkpart primary 1024M 1536M") == 0) {
				if (Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " mkpart primary 1536M 100%") == 0) {
					if (Sys.command("parted /dev/" + Config.LOCAL_PARTITION_DISK + " set 1 boot on") == 0)
						return true;
				}
			}
		}
		return false;
	}

	public static function formatDrives():Bool {
		if (Sys.command("mkfs.ext4 /dev/" + Config.LOCAL_PARTITION_LAYOUT_BOOT) == 0) {
			if (Sys.command("mkfs.ext4 /dev/" + Config.LOCAL_PARTITION_LAYOUT_MAIN) == 0) {
				return true;
			}
		}
		return false;
	}

	public static function mountDrives():Bool {
		if (Sys.command("mount /dev/" + Config.LOCAL_PARTITION_LAYOUT_MAIN + " /mnt") == 0) {
			if (Sys.command("mkdir -p /mnt/boot") == 0) {
				if (Sys.command("mount /dev/" + Config.LOCAL_PARTITION_LAYOUT_BOOT + " /mnt/boot") == 0) {
					return true;
				}
			}
		}
		return false;
	}

	public static function installBaseSystem():Bool {
		return Sys.command("/etc/installer/scripts/basic-install.sh") == 0;
	}

	public static function configureFstab():Bool {
		return Sys.command("genfstab -U /mnt >> /mnt/etc/fstab") == 0;
	}

	public static function copyFsroot():Bool {
		if (Sys.command("cp -r /etc/installer/scripts /mnt/etc/installer") == 0) {
			if (Sys.command("cp -r /etc/installer/sysrootfs /mnt") == 0)
				return true;
		}

		return false;
	}

	public static function installPackages():Bool {
		return Sys.command("arch-chroot /mnt /etc/installer/scripts/install-packages.sh") == 0;
	}

	public static function configureGrub():Bool {
		if (Sys.command("arch-chroot /mnt grub-install /dev/" + Config.LOCAL_PARTITION_DISK + " --efi-directory=/boot") == 0) {
			if (Sys.command("arch-chroot /mnt grub-mkconfig -o /boot/grub/grub.cfg") == 0)
				return true;
		}

		return false;
	}

	public static function unmountDrives():Bool {
		return Sys.command("umount -R /mnt") == 0;
	}
}
