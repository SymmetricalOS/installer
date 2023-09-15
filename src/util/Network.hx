package util;

import sys.Http;

class Network {
	public static function check():Bool {
		var http = new Http("https://1.1.1.1");
		var status = false;
		http.onData = (d:String) -> {
			status = true;
		};
		http.request();

		return status;
	}
}
