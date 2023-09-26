package activities;

import flixel.FlxG;
import flixel.FlxSprite;
import flixel.FlxState;
import flixel.group.FlxGroup;
import flixel.text.FlxText;
import flixel.util.FlxColor;
import sys.thread.Thread;
import ui.GProgress;
import util.Installer;
import util.Progress;

class Confirm extends FlxState {
	static var bg:FlxSprite;

	static var title:FlxText;

	static var status:FlxText;
	static var progressBg:FlxSprite;
	static var progressBar:FlxSprite;

	static var progress = 0;
	static var totalProgress = 0;
	static var finished = false;
	static var started = false;

	static var button:FlxText;

	override public function create() {
		super.create();

		Progress.current++;

		bg = new FlxSprite();
		bg.makeGraphic(FlxG.width, FlxG.height, FlxColor.GRAY);
		add(bg);

		title = new FlxText(0, 0, 0, "Installing Symmetrical OS").setFormat("legato-sans.ttf", 64, FlxColor.BLACK);
		title.y = FlxG.height / 32;
		title.screenCenter(X);
		add(title);

		status = new FlxText(0, 0, 0, "Preparing Installation").setFormat("legato-sans.ttf", 32, FlxColor.BLACK);
		status.screenCenter(XY);
		add(status);

		progressBg = new FlxSprite();
		progressBg.makeGraphic(FlxG.width, cast FlxG.height / 16, FlxColor.BLACK);
		progressBg.y = status.y + (status.height * 1);
		add(progressBg);

		progressBar = new FlxSprite();
		progressBar.makeGraphic(1, cast FlxG.height / 16, FlxColor.fromInt(0xFFED820E));
		progressBar.y = progressBg.y;
		progressBar.x = 0;
		add(progressBar);

		button = new FlxText(0, 0, 0, "Finish").setFormat("legato-sans.ttf", 48, FlxColor.GRAY, CENTER, FlxTextBorderStyle.OUTLINE, FlxColor.BLACK);
		button.x = FlxG.width - button.width;
		button.y = FlxG.height - button.height;
		add(button);
	}

	override public function update(elapsed:Float) {
		super.update(elapsed);

		if (!started) {
			Thread.create(() -> {
				install();
			});
		}

		if (FlxG.mouse.overlaps(button) && FlxG.mouse.justPressed && finished)
			FlxG.switchState(new Reboot());

		progressBar.width = (progress / totalProgress) * FlxG.width;
		progressBar.x = 0;
	}

	function install() {
		started = true;
		totalProgress = 11;

		if (Installer.addPermissions()) {
			status.text = "Partitioning drives";
			if (Installer.partitionDrives()) {
				progress++;
				status.text = "Formatting drives";
				if (Installer.formatDrives()) {
					progress++;
					status.text = "Mounting drives";
					if (Installer.mountDrives()) {
						progress++;
						status.text = "Installing base system";
						if (Installer.installBaseSystem()) {
							progress++;
							status.text = "Configuring fstab";
							if (Installer.configureFstab()) {
								progress++;
								status.text = "Copying files";
								if (Installer.copyFsroot()) {
									progress++;
									status.text = "Installing packages";
									if (Installer.installPackages()) {
										progress++;
										status.text = "Configuring grub";
										if (Installer.configureGrub()) {
											progress++;
											status.text = "Installing desktop";
											if (Installer.installWM()) {
												progress++;
												status.text = "Cleaning up";
												if (Installer.unmountDrives()) {
													progress++;
													finished = true;
													status.text = "Finished";
													button.color = FlxColor.fromInt(0xFFED820E);
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		status.text = "Installation failed";
		finished = true;
		button.color = FlxColor.fromInt(0xFFED820E);
	}
}
