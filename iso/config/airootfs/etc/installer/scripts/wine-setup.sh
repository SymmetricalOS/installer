pacman -S wine --noconfirm
xdg-mime default wine.desktop exe
cd /tmp/installer/
mkdir -p winetricks
cd winetricks
wget  https://raw.githubusercontent.com/Winetricks/winetricks/master/src/winetricks
chmod +x ./winetricks
./winetricks dxvk-master corefonts vcrun6 dotnet48 tahoma xinput
