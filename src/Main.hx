package;

import activities.MainActivity;
import flixel.FlxG;
import flixel.FlxGame;
import openfl.Lib;
import openfl.display.Sprite;
import util.Progress;

class Main extends Sprite {
	public function new() {
		super();
		trace("here");
		Progress.init();
		trace("here");
		Lib.current.addChild(new FlxGame(0, 0, MainActivity, 30, 30, true, true));
		trace("here");

		FlxG.mouse.useSystemCursor = true;
		trace("here");
	}
}
