package;

import haxe.ui.HaxeUIApp;

class Main {
	public static function main() {
		var app = new HaxeUIApp();

		app.ready(function() {
			var mainView = new MainView();
			app.addComponent(mainView);

			app.start();
		});
	}
}
