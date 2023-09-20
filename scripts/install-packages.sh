pacman-key --init
pacman-key --populate

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
pacman-key --lsign-key dvzrv@archlinux.org
pacman -S efibootmgr --noconfirm

# wine
# chmod +x /etc/installer/scripts/wine-setup.sh
# /etc/installer/scripts/wine-setup.sh
