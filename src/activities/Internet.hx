package activities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import sys.Http;
import ui.GProgress;
import util.Network;
import util.Progress;

class Internet extends FlxState {
	static var bg:FlxSprite;

	static var title:FlxText;

	static var progress:FlxGroup;

	static var button:FlxText;

	static var status:FlxText;

	static var interval:Float = 9;
	static var connected:Bool = false;

	override public function create() {
		super.create();

		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		add(bg);

		title = new FlxText(0, 0, 0, "Internet Connection").setFormat("legato-sans.ttf", 64, FlxColor.BLACK);
		title.y = FlxG.height / 32;
		title.screenCenter(X);
		add(title);

		progress = new GProgress(FlxG.height);
		add(progress);

		button = new FlxText(0, 0, 0, "Next").setFormat("legato-sans.ttf", 48, FlxColor.GRAY, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		button.x = FlxG.width - button.width;
		button.y = FlxG.height - button.height;
		add(button);

		status = new FlxText(0, 0, 0, "Checking connection").setFormat("legato-sans.ttf", 36, FlxColor.BLACK);
		status.screenCenter(XY);
		add(status);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		interval += elapsed;

		if (FlxG.mouse.overlaps(button) && FlxG.mouse.justPressed && connected)
			FlxG.switchState(new Partitioning());

		if (interval > 10) {
			interval = 0;
			check();
		}
	}

	function check() {
		var s = Sys.command("curl -I https://1.1.1.1");
		if (s == 0) {
			button.color = FlxColor.fromInt(0xFFED820E);
			status.text = "Connected to the internet";
			status.screenCenter(XY);
			connected = true;
		}
	}
}
