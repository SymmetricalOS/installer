pacman-key --init

# wget
pacman -Syy wget --noconfirm

# git
pacman -S git --noconfirm

# networkmanager
pacman -S networkmanager --noconfirm
systemctl enable NetworkManager.service

# grub
pacman-key --lsign-key eworm@archlinux.org --noconfirm
pacman-key --lsign-key dvzrv@archlinux.org --noconfirm
pacman -S grub efibootmgr --noconfirm

# wine
# chmod +x /etc/installer/scripts/wine-setup.sh
# /etc/installer/scripts/wine-setup.sh
