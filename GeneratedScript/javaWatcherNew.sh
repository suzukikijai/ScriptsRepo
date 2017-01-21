#!/bin/bash
while :
do
	rsync -avzh /home/worklyf/Desktop/ScrappedFiles/ /home/worklyf/HIRRRWORKSPACE/ToolScrap/src/main/java/org/scrappers/Scrap --remove-source-files
	sleep 5
done
