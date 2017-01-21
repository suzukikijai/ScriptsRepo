#!/bin/bash
while :
do
source="/media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN/toDown.txt"
logger="/media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN/download.log"

	while [ -s $source ]
	do
		line=$(head -n 1 $source)
		incidentTime=`date +%Y-%m-%d.%H:%M:%S`
		echo " $incidentTime :: $line :: Started " | cat - $logger > temp && mv temp $logger
		sed -i '1d' $source
		cd /media/sageadmin/95B3-978B/Complete/Downloads
		wget -r -np -nc -nH /media/sageadmin/95B3-978B/Complete/Downloads --cut-dirs=2 -R index.html $line && echo " `date +%Y-%m-%d.%H:%M:%S` :: $line :: Complete " | cat - $logger > temp && mv temp $logger
		zenity --info --text "Completed incident of $incidentTime :: $line"
	done
done
