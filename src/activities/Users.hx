package activities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.addons.ui.FlxInputText;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import ui.GProgress;
import util.Progress;

class Users extends FlxState {
	static var bg:FlxSprite;

	static var title:FlxText;

	static var progress:FlxGroup;

	static var button:FlxText;

	static var username:FlxInputText;
	static var password:FlxInputText;
	static var confirmPassword:FlxInputText;
	static var usernamel:FlxText;
	static var passwordl:FlxText;
	static var confirmPasswordl:FlxText;

	override public function create() {
		super.create();

		Progress.current++;

		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		add(bg);

		title = new FlxText(0, 0, 0, "Users").setFormat("legato-sans.ttf", 64, FlxColor.BLACK);
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

		username = new FlxInputText(0, 0, 320, "", 32, FlxColor.BLACK);
		username.font = "legato-sans.ttf";
		username.screenCenter(XY);
		username.y -= username.height;
		add(username);
		usernamel = new FlxText(0, 0, 0, "Username: ").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		usernamel.x = username.x - usernamel.width;
		usernamel.y = username.y;
		add(usernamel);

		password = new FlxInputText(0, 0, 320, "", 32, FlxColor.BLACK);
		password.font = "legato-sans.ttf";
		password.screenCenter(XY);
		password.passwordMode = true;
		add(password);
		passwordl = new FlxText(0, 0, 0, "Password: ").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		passwordl.x = password.x - passwordl.width;
		passwordl.y = password.y;
		add(passwordl);

		confirmPassword = new FlxInputText(0, 0, 320, "", 32, FlxColor.BLACK);
		confirmPassword.font = "legato-sans.ttf";
		confirmPassword.screenCenter(XY);
		confirmPassword.y += confirmPassword.height;
		confirmPassword.passwordMode = true;
		add(confirmPassword);
		confirmPasswordl = new FlxText(0, 0, 0, "Confirm Password: ").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		confirmPasswordl.x = confirmPassword.x - confirmPasswordl.width;
		confirmPasswordl.y = confirmPassword.y;
		add(confirmPasswordl);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (FlxG.mouse.overlaps(button) && FlxG.mouse.justPressed)
			FlxG.switchState(new Desktop());
	}
}
