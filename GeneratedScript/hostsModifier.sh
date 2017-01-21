#!/bin/bash
passwordSudo=$(zenity --password --title "Enter password for `whoami`" )
usernameMod=$(zenity --entry --text "Enter hostname" --entry-text "umnMachine")


cat /etc/hosts > /tmp/temphostsfile
echo "192.168.1.21  puppetmaster.local.hirrr.com" >> /tmp/temphostsfile
echo $passwordSudo| sudo -S mv /tmp/temphostsfile /etc/hosts


echo "$usernameMod.local.hirrr.com" > /tmp/temphostnamefile
echo $passwordSudo| sudo -S mv /tmp/temphostnamefile /etc/hostname

echo $passwordSudo| sudo -S apt-get -y install puppet
