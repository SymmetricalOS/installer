#!/bin/bash

packages=(/etc/installer/offline/pkgs/*.pkg.tar.zst)

for package in "${packages[@]}"
do
    sudo pacman -U "$package"
done