#!/bin/bash

pacman -S xorg xorg-xinit --noconfirm
pacman -S xfce4 xfce4-goodies --noconfirm

# cd /etc/installer/
# git clone https://aur.archlinux.org/xfce4-docklike-plugin.git
# cd xfce4-docklike-plugin/
# makepkg -si --noconfirm

# TODO: apply customizations

cp /etc/X11/xinit/xinitrc ~/.xinitrc
echo exec startxfce4 > ~/.xinitrc