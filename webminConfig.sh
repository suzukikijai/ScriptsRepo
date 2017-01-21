#!/bin/bash


szUrl=$(zenity --password --width=560 --title "Enter password for `whoami`")

cd /tmp
echo $szUrl| sudo -S  wget http://downloads.sourceforge.net/project/webadmin/webmin/1.820/webmin_1.820_all.deb?r=http%3A%2F%2Fwww.webmin.com%2Fdownload.html&ts=1480485076&use_mirror=liquidtelecom

echo $szUrl| sudo -S  mv webmin_1.820_all.deb\?r\=http%3A%2F%2Fwww.webmin.com%2Fdownload.html webmin.deb

echo $szUrl| sudo -S  dpkg -i webmin.deb
echo $szUrl| sudo -S  apt-get -f install
