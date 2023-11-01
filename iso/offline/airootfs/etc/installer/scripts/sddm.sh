#!/bin/bash
pacman -S sddm --noconfirm
systemctl enable sddm.service