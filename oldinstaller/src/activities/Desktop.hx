package activities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import ui.GProgress;
import util.Config;
import util.Progress;

class Desktop extends FlxState {
	static var bg:FlxSprite;

	static var title:FlxText;

	static var progress:FlxGroup;

	static var button:FlxText;

	static var wmtitle:FlxText;

	static var opxfwm:FlxText;
	static var opi3:FlxText;
	static var opopenbox:FlxText;
	static var opawesome:FlxText;

	static var tiling:FlxText;

	override public function create() {
		super.create();

		Progress.current++;

		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		add(bg);

		title = new FlxText(0, 0, 0, "Desktop").setFormat("legato-sans.ttf", 64, FlxColor.BLACK);
		title.y = FlxG.height / 32;
		title.screenCenter(X);
		add(title);

		progress = new GProgress(FlxG.height);
		add(progress);

		button = new FlxText(0, 0, 0,
			"Install").setFormat("legato-sans.ttf", 48, FlxColor.fromInt(0xFFED820E), CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		button.x = FlxG.width - button.width;
		button.y = FlxG.height - button.height;
		add(button);

		wmtitle = new FlxText(0, 0, 0, "Window Manager").setFormat("legato-sans.ttf", 48, FlxColor.BLACK);
		wmtitle.screenCenter(X);
		wmtitle.y = title.height * 2;
		add(wmtitle);

		opxfwm = new FlxText(0, 0, 0, "XFWM - The default look and feel of Symmetrical OS").setFormat("legato-sans.ttf", 32, FlxColor.fromInt(0xFFED820E));
		opxfwm.screenCenter(X);
		opxfwm.y = wmtitle.y + (wmtitle.height * 1.5);
		add(opxfwm);

		opi3 = new FlxText(0, 0, 0, "i3 - A lightweight tiling* manager for power users").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		opi3.screenCenter(X);
		opi3.y = opxfwm.y + opxfwm.height;
		add(opi3);

		opopenbox = new FlxText(0, 0, 0, "Openbox - A basic but customizable window manager").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		opopenbox.screenCenter(X);
		opopenbox.y = opi3.y + opi3.height;
		add(opopenbox);

		opawesome = new FlxText(0, 0, 0, "Awesome - A highly configurable tiling* window manager").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		opawesome.screenCenter(X);
		opawesome.y = opopenbox.y + opopenbox.height;
		add(opawesome);

		tiling = new FlxText(0, 0, 0,
			"*tiling window manager - A window manager where you use keyboard shortcuts to manage and open windows. These are usually for advanced users.")
			.setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		tiling.wordWrap = true;
		tiling.width = FlxG.width / 1.5;
		tiling.screenCenter(X);
		tiling.y = FlxG.height - (title.height * 2);
		add(tiling);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (FlxG.mouse.overlaps(button) && FlxG.mouse.justPressed)
			FlxG.switchState(new Confirm());

		if (FlxG.mouse.overlaps(opxfwm) && FlxG.mouse.justPressed) {
			opxfwm.color = FlxColor.fromInt(0xFFED820E);
			opi3.color = FlxColor.BLACK;
			opopenbox.color = FlxColor.BLACK;
			opawesome.color = FlxColor.BLACK;
			Config.DESKTOP_WM = "xfwm";
		}
		if (FlxG.mouse.overlaps(opi3) && FlxG.mouse.justPressed) {
			opi3.color = FlxColor.fromInt(0xFFED820E);
			opxfwm.color = FlxColor.BLACK;
			opopenbox.color = FlxColor.BLACK;
			opawesome.color = FlxColor.BLACK;
			Config.DESKTOP_WM = "i3";
		}
		if (FlxG.mouse.overlaps(opopenbox) && FlxG.mouse.justPressed) {
			opopenbox.color = FlxColor.fromInt(0xFFED820E);
			opi3.color = FlxColor.BLACK;
			opxfwm.color = FlxColor.BLACK;
			opawesome.color = FlxColor.BLACK;
			Config.DESKTOP_WM = "openbox";
		}
		if (FlxG.mouse.overlaps(opawesome) && FlxG.mouse.justPressed) {
			opawesome.color = FlxColor.fromInt(0xFFED820E);
			opi3.color = FlxColor.BLACK;
			opopenbox.color = FlxColor.BLACK;
			opxfwm.color = FlxColor.BLACK;
			Config.DESKTOP_WM = "awesome";
		}
	}
}
