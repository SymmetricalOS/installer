package util;

class Installer {
	public static function installBaseSystem() {
		Sys.command("/tmp/installer/basic-install.sh");
	}
}
