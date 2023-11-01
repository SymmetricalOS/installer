#!/bin/bash
pacman -S lightdm --noconfirm
pacman -S lightdm-gtk-greeter --noconfirm
systemctl enable lightdm.service
