package;

import haxe.ui.containers.VBox;
import haxe.ui.events.MouseEvent;

using StringTools;

@:build(haxe.ui.ComponentBuilder.build("assets/main-view.xml"))
class MainView extends VBox {
	public function new() {
		super();

		title.text = Labels.main_title;
		welcomedesc.text = Labels.main_welcomedesc;
	}
}
