cd /tmp/installer
git clone https://aur.archlinux.org/snapd.git
cd snapd
makepkg -si --noconfirm
systemctl enable snapd.socket
ln -s /var/lib/snapd/snap /snap
systemctl start snapd.socket
