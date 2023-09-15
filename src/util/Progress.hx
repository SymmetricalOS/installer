package util;

class Progress {
	public static var current = 0;
	public static var total = 0;
	public static var steps = new Array<String>();

	public static function init() {
		steps.push("Internet");
		steps.push("Partitioning");
		steps.push("Users");
		steps.push("Desktop");
		steps.push("Install");
		steps.push("Reboot");

		total = steps.length;
	}
}
