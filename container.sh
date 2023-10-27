#!/bin/bash

sudo podman run --volume /home/sid/Documents/symmos/iso/installer:/root/iso -it docker.io/archlinux /root/iso/in_container.sh
