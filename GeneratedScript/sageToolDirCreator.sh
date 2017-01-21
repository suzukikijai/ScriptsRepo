#!/bin/bash

passwordSudo=$(zenity --password --title "Enter password for `whoami`" )


echo $passwordSudo| sudo -S mkdir -p /SageTools

echo $passwordSudo| sudo -S apt-get update | tee >(zenity --text "Updating Repo Source URLs" --progress --auto-close --auto-kill --pulsate)
echo $passwordSudo| sudo -S apt-get install nfs-common | tee >(zenity --text "Installing Network Share Driver" --progress --auto-close --auto-kill --pulsate)
sleep 2 | tee >(zenity --text "Creating folder sync between this machine and SaGeTools at /SaGeTools" --progress --auto-close --auto-kill --pulsate)
echo $passwordSudo| sudo -S sh -c 'echo "192.168.1.7:/SaGeTools    /SageTools   nfs auto,noatime,nolock,bg,nfsvers=4,intr,tcp,actimeo=1800 0 0" >> /etc/fstab'
echo $passwordSudo| sudo -S mount -a | tee >(zenity --text "Mounting the drives" --progress --auto-close --auto-kill --pulsate)
echo $passwordSudo| sudo -S mount 192.168.1.7:/SaGeTools /SageTools | tee >(zenity --text "Mounting last configured drive" --progress --auto-close --auto-kill --pulsate)
zenity --text-info --title="SageTools Setup complete" --width=500 --height=300
gnome-open /SageTools
