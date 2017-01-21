#!/bin/sh
zenity --info --text "Initiated custom JavaWatcher using sync."
while :
do
    rsync -r /home/worklyf/Desktop/ScrappedFiles/  /home/worklyf/HIRRRWORKSPACE/ToolScrap/src/main/java/org/scrappers/Scrap
    sleep 5
done

