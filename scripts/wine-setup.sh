pacman -S wine
xdg-mime default wine.desktop exe
cd /tmp/installer/
mkdir winetricks
cd winetricks
wget  https://raw.githubusercontent.com/Winetricks/winetricks/master/src/winetricks
chmod +x winetricks
winetricks dxvk-master
