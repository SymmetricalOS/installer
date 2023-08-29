# git
pacman -S git --noconfirm

# yay
cd /tmp/installer
git clone https://aur.archlinux.org/yay.git
cd yay
makepkg -si --noconfirm

# wine
/tmp/installer/wine-setup.sh
