#!/bin/bash

cd /root/iso
pacman -Sy sudo haxe archiso --noconfirm
sudo haxelib setup ~/haxe/lib
chmod +x ./Autobuild
sudo ./Autobuild