#!/bin/bash
pacman -S lightdm --noconfirm
systemctl enable lightdm.service