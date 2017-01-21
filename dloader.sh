#!/bin/bash  
cd /media/sageadmin/95B3-978B/Complete/Downloads
szUrl=$(zenity --entry --width=560 --text "Enter source url" --entry-text "")
echo $szUrl >> /media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN/toDown.txt
# szSavePath=$(zenity --file-selection --save --confirm-overwrite);mkdir $szSavePath
# cd $szSavePath
#wget -r -np -nH --cut-dirs=2 -R index.html $szUrl | tee >(zenity --text "Syncing $szUrl" --progress --auto-close --pulsate)
#echo Extract over

