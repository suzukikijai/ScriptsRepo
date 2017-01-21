#!/bin/bash

mysql --host=192.168.1.15 --user=root --password=umn123 --port=3306 -e "select User from mysql.user;" > /home/sageadmin/Documents/TxtModuleInitiatorSetup/tets.txt
sleep .01
ex -sc '1d2|x' $i.txt

touch log
echo `date +%Y-%m-%d.%H:%M`:: The txt files were updated | cat - /TxtModule/log > temp && mv temp /TxtModule/log
echo $szUrl| sudo -S chmod 755 -R /TxtModule
echo $szUrl| sudo -S rm /TxtModule/*.*~
zenity --text-info --title="Text Module Implementation Setup Complete" --width=500 --height=300 --html --url="https://media.giphy.com/media/11sBLVxNs7v6WA/giphy.gif"

