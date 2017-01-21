#!/bin/bash
username=`whoami`
fileName=""
passwdFile=$(zenity --password --title "Enter password for $username" --text "Enter password for $username" )

cd ~
crontab -l > /tmp/mycron
if grep -q mountChecker "mycron"; then
   zenity --info --title "Already exists" --text "Share checker already installed"
else
	echo "*/2 * * * * /opt/$fileName" >> /tmp/mycron
	/tmp/mycron mycron
	mv mycron LastCronBackup
fi
echo $passwdFile| sudo -S  cp /ShareDrive/Sorted/Sooraj/$fileName /opt/
echo $passwdFile| sudo -S  chmod 755 /opt/$fileName
/opt/$fileName





