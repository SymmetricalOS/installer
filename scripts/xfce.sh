#!/bin/bash

pacman -S xorg xorg-xinit --noconfirm
pacman -S xfce4 xfce4-goodies --noconfirm

cd /etc/installer
git clone https://github.com/nsz32/docklike-plugin && cd docklike-plugin
./autogen.sh
make
sudo make install

# TODO: apply customizations

cp /etc/X11/xinit/xinitrc ~/.xinitrc
echo exec startxfce4 > ~/.xinitrc

pacman -S lightdm --noconfirm
systemctl enable lightdm.service
