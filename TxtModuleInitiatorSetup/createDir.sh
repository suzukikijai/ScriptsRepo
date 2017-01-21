#!/bin/bash
zenity --text-info --title="Text Module Implementation Setup" --width=200 --height=300 --html --url="https://media.tenor.co/images/06f97b698c7c9e41e0714775218148db/raw" --checkbox="SaGe: Continue with install?"
if [ "$?" -eq "0" ];then
	szUrl=$(zenity --password --width=560)
	echo $szUrl| sudo -S mkdir /TxtModule
	cd /TxtModule
	query_array=(jobtitle LocationWithCountry pdatewords expwords badwords overviewwords jobDurTypeWords jobTitleOtherWordsCheck no_jobs skills no_of_pos_forDesc no_of_pos_forTitle ConjuctivesRmvWords CoreWords Dept FirstWords_ToFindJob SecondWords_ToFindJob WorngTitleWords CareerDeciderWordsFirst CareerDeciderWordsSecond jobboard MailFindingWordsFirst MailFindingWordsSecond SiteEntryWords)
	echo $szUrl| sudo -S chown root:root -R /TxtModule
	echo $szUrl| sudo -S chmod 777 -R /TxtModule
	for i in ${query_array[@]}
	do 
	#$i
	echo $szUrl| sudo -S mysql --host=192.168.1.15 --user=root --password=careersnow@123 --port=3306 -e "SELECT distinct $i FROM scrapperdb.matching_txts" > $i.txt
	sleep .01
	echo $szUrl| sudo -S ex -sc '1d2|x' $i.txt
	sleep .01
	done
	touch log
	echo `date +%Y-%m-%d.%H:%M`:: The txt files were updated | cat - /TxtModule/log > temp && mv temp /TxtModule/log
	echo $szUrl| sudo -S chmod 755 -R /TxtModule
	echo $szUrl| sudo -S rm /TxtModule/*.*~
	zenity --text-info --title="Text Module Implementation Setup Complete" --width=500 --height=300 --html --url="https://media.giphy.com/media/11sBLVxNs7v6WA/giphy.gif"
else
       exit 0
fi
