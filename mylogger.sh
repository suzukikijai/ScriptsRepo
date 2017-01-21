#!/bin/bash  
cd /media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN
szAnswer=$(zenity --entry --text "How shalt I please thou darkness?" --entry-text "Chaos") 
echo `date +%d-%m-%Y::%H:%M`: $szAnswer | cat - work.log > temp && mv temp work.log
