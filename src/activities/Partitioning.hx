package activities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import ui.GProgress;
import util.Progress;

class Partitioning extends FlxState {
	static var bg:FlxSprite;

	static var title:FlxText;

	static var progress:FlxGroup;

	static var button:FlxText;

	static var option1Bg:FlxSprite;
	static var option1Text:FlxText;

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
		option1Text = new FlxText(0, 0, 0, "Wipe Disk").setFormat("legato-sans.ttf", 48, FlxColor.fromInt(0xFFED820E));
		option1Bg.makeGraphic(cast option1Text.width + 32, cast option1Text.height + 18, FlxColor.WHITE);
		option1Bg.screenCenter(XY);
		option1Text.screenCenter(XY);
		add(option1Bg);
		add(option1Text);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (FlxG.mouse.overlaps(button) && FlxG.mouse.justPressed)
			FlxG.switchState(new Users());
	}
}
