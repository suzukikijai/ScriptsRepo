#!/bin/bash
username=`whoami`
passwdFile=$(zenity --password --title "MySQL Authenticator" --text "Enter password for $username" )
cd /tmp
crontab -l > /tmp/mycron
if grep -q mountChecker "mycron"; then
   zenity --info --title "Already exists" --text "Share checker already installed"
else
	echo "*/2 * * * * /opt/mountChecker.sh.x" >> /tmp/mycron
	/tmp/mycron mycron
	rm mycron
fi
echo $passwdFile| sudo -S  cp /ShareDrive/Sorted/Sooraj/mountChecker.sh.x /opt/
echo $passwdFile| sudo -S  chmod 755 /opt/mountChecker.sh.x
/opt/mountChecker.sh.x





