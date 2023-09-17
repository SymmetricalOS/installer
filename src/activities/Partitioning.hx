package activities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import sys.FileSystem;
import ui.GProgress;
import util.Config;
import util.Progress;

using StringTools;

class Partitioning extends FlxState {
	static var bg:FlxSprite;

	static var title:FlxText;

	static var progress:FlxGroup;

	static var button:FlxText;

	static var option1Bg:FlxSprite;
	static var option1Text:FlxText;

	static var drives:Array<String> = new Array();
	static var dr:Array<FlxText> = new Array();

	static var disksel:String = "";

	override public function create() {
		super.create();

		Progress.current++;

		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		add(bg);

		title = new FlxText(0, 0, 0, "Partitioning").setFormat("legato-sans.ttf", 64, FlxColor.BLACK);
		title.y = FlxG.height / 32;
		title.screenCenter(X);
		add(title);

		progress = new GProgress(FlxG.height);
		add(progress);

		button = new FlxText(0, 0, 0,
			"Next").setFormat("legato-sans.ttf", 48, FlxColor.fromInt(0xFFED820E), CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		button.x = FlxG.width - button.width;
		button.y = FlxG.height - button.height;
		add(button);

		option1Bg = new FlxSprite();
		option1Text = new FlxText(0, 0, 0, "Wipe Disk").setFormat("legato-sans.ttf", 48, FlxColor.BLACK);
		option1Bg.makeGraphic(cast option1Text.width + 32, cast option1Text.height + 18, FlxColor.fromInt(0xFFED820E));
		option1Bg.screenCenter(XY);
		option1Text.screenCenter(XY);
		add(option1Bg);
		add(option1Text);

		var ds = FileSystem.readDirectory("/dev/");
		for (d in ds) {
			if (d.startsWith("sda") || d.startsWith("vda")) {
				var numbers = "0123456789";
				var yes = true;
				for (n in numbers.split("")) {
					if (d.contains(n))
						yes = false;
				}
				if (yes) {
					drives.push(d);
					trace('Found /dev/$d');
				}
			}
			if (d.startsWith("nvme")) {
				if (d.substr(4).contains("n")) {
					if (!d.contains("p")) {
						drives.push(d);
						trace('Found /dev/$d');
					}
				}
			}
		}

		for (drive in drives) {
			Sys.sleep(0.01);
			var s = FileSystem.stat("/dev/" + drive);
			var text = new FlxText(0, 0, 0, drive).setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
			text.screenCenter(X);
			if (dr.length > 0)
				text.y = dr[dr.length - 1].height + dr[dr.length - 1].y;
			else
				text.y = title.y + title.height;
			dr.push(text);
			add(dr[dr.length - 1]);
		}
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (FlxG.mouse.overlaps(button) && FlxG.mouse.justPressed) {
			Config.LOCAL_PARTITION_LAYOUT = "wipe";
			Config.LOCAL_PARTITION_DISK = disksel;
			Config.LOCAL_PARTITION_LAYOUT_BOOT = disksel + "p1";
			Config.LOCAL_PARTITION_LAYOUT_MAIN = disksel + "p2";
			FlxG.switchState(new Users());
		}

		for (d in dr) {
			if (d.text == disksel) {
				d.color = FlxColor.fromInt(0xFFED820E);
			} else {
				d.color = FlxColor.BLACK;
			}
			if (FlxG.mouse.overlaps(d) && FlxG.mouse.justPressed) {
				disksel = d.text;
			}
		}
	}
}
