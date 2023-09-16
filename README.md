# SymmOS Installer

This repository contains scripts and the graphical component for the Symmetrical OS installation process.

## Building

Note: you MUST use Arch Linux to build the program.

1. Install [autobuild](https://github.com/sidgames5/autobuild)
2. Install `archiso` from pacman
3. Type `build` in the terminal

ISO file is located in `bin/iso/`

Installer application is located in `bin/linux/bin/`

## Testing

### Setup

1. Do all the setup in [Building](https://github.com/SymmetricalOS/installer#building)
2. Install all the qemu and libvirt related packages
3. Build the ISO with the `build` command
4. Create a new virtual machine with the ISO file
5. Edit the `Autobuild` file and replace "archlinux-2" with the ID of your virtual machine

### Testing

You can now test the installer with the `atest` command. The virtual machine should automatically pop up and start.
