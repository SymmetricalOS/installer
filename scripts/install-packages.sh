pacman-key --init

# wget
pacman -Syy wget --noconfirm

# git
pacman -S git --noconfirm

# networkmanager
pacman -S networkmanager --noconfirm
systemctl enable NetworkManager.service

# grub
pacman-key --lsign-key eworm@archlinux.org
pacman -S grub --noconfirm

# wine
# chmod +x /etc/installer/scripts/wine-setup.sh
# /etc/installer/scripts/wine-setup.sh
