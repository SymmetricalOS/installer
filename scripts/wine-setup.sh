pacman -S wine --no-confirm
xdg-mime default wine.desktop exe
cd /tmp/installer/
mkdir -p winetricks
cd winetricks
wget  https://raw.githubusercontent.com/Winetricks/winetricks/master/src/winetricks
chmod +x ./winetricks
./winetricks dxvk-master
