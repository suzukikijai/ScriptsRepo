#!/bin/bash
while :
do
	activatorLocation=/home/worklyf/activationKeySet1.txt
	loggingLocation=/home/worklyf/MySQLServerRebootlog
	sudopass=mainserver
	serverstaLocation=/home/sageadmin/Desktop/a.txt
	servermysqlstat=`cat serverstaLocation`

	#servermysqlstat=`cat /home/worklyf/activationKeySet1.txt`

	if [ $servermysqlstat = 1 ]; then echo $sudopass| sudo -S service mysql restart ; > $activatorLocation ; 
	echo `date +%d-%m-%Y::%H:%M`: Successful reboot | cat - $loggingLocation > temp && mv temp $loggingLocation; rm temp;
	fi 
	sleep 3

done

