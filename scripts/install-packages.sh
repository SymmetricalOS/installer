# git
pacman -S git

# yay
cd /tmp/installer
git clone https://aur.archlinux.org/yay.git
cd yay
makepkg -si --noconfirm

# wine
/tmp/installer/wine-setup.sh