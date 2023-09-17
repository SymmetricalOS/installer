# git
pacman -S git --noconfirm

# networkmanager
pacman -S networkmanager --noconfirm
systemctl enable NetworkManager

# grub
pacman -S grub --noconfirm

# wine
chmod +x /tmp/installer/wine-setup.sh
/tmp/installer/wine-setup.sh
