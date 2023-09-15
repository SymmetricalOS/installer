package ui;

import flixel.FlxBasic;
import flixel.FlxG;
import flixel.FlxSprite;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import util.Progress;

class GProgress extends FlxGroup {
	public var height:Float;

	public var labels = new Array<FlxText>();
	public var bg:FlxSprite;
	public var bar:FlxSprite;

	public function new(height:Float) {
		super();

		this.height = height;

		bg = new FlxSprite();
		bg.makeGraphic(cast FlxG.width / 64, cast height, FlxColor.BLACK);
		add(bg);

		bar = new FlxSprite();
		bar.makeGraphic(cast FlxG.width / 64, Math.floor((Progress.current / Progress.total) * height), FlxColor.fromInt(0xFFED820E));
		add(bar);

		for (i in 0...Progress.total) {
			var step = Progress.steps[i];
			var t = new FlxText(0, 0, 0, step).setFormat("opensans.ttf", 32, FlxColor.BLACK);
			t.x = bg.width * 2;
			t.y = (i / Progress.total) * height;
			labels.push(t);
			add(t);
		}
	}

	override function add(Object:FlxBasic):FlxBasic {
		return super.add(Object);
	}
}
