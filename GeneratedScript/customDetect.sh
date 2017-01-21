#!/bin/sh
xmodmap -e 'add mod3 = Scroll_Lock'
zenity --info --text "Initiated custom sync."
while :
do
    /home/sageadmin/Documents/usercustomDetect.sh
    sleep 5
done

