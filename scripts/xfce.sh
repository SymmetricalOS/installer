#!/bin/bash

pacman -S xorg xorg-xinit --noconfirm
pacman -S xfce4 xfce4-goodies --noconfirm

pacman -S xfce4-docklike-plugin --noconfirm

pacman -S symmos-xfce4-default --noconfirm

cp /etc/X11/xinit/xinitrc ~/.xinitrc
echo exec startxfce4 > ~/.xinitrc

pacman -S lightdm --noconfirm
systemctl enable lightdm.service
