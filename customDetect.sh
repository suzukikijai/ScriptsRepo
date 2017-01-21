#!/bin/sh
xmodmap -e 'add mod3 = Scroll_Lock'
echo herishen1898 | sudo -S mount -w "/dev/sda3" /media/sageadmin/95B3-978B/
zenity --info --text "Initiated custom sync."
while :
do
    /home/sageadmin/Documents/usercustomDetect.sh
    sleep 5
done

