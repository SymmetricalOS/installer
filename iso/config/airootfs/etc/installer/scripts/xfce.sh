#!/bin/bash

pacman -S xorg xorg-xinit --noconfirm
pacman -S xfce4 xfce4-goodies --noconfirm

pacman -S xfce4-docklike-plugin --noconfirm

# TODO: apply customizations

cp /etc/X11/xinit/xinitrc ~/.xinitrc
echo exec startxfce4 > ~/.xinitrc

pacman -S lightdm --noconfirm
systemctl enable lightdm.service
