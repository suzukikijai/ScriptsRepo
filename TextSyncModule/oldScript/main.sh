#!/bin/bash

#SHADW file check
while :
	do
		SHADW="/proc/shadwTxtModBash"
		if [ -f $SHADW ];
			then
			#result2=$(sudo echo gello)
			#if ! [ -z "${result2}" ]; then
				zenity  --info  --title "HirrrDaemon Manager Notification" --text "Successfully initiated TextUpdation Daemon"
				passwdFile=`cat $SHADW`
			#else
				#zenity  --error  --title "HirrrDaemon Manager Notification" --text "Password error. Reset password"
				#echo $passwdFile| sudo -S rm $SHADW
			#fi
		else
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Password cache empty. Reconfiguring TxtModule authenticator.")
			passwdFile=$(zenity --password --title "TxtModule Authenticator Setup" )
			#result1=$(sudo echo gello)
			#if ! [ -z "${result1}" ]; then
			   echo $passwdFile| /tmp/tempPasswdFile
			   echo $passwdFile| sudo -S mv /tmp/tempPasswdFile $SHADW
			#else
			#	zenity  --error  --title "Setup failed" --text "Please check your password."
			#fi
		fi
		#Main Function
		#result=$(sudo echo gello)
		#if ! [ -z "${result}" ]; then
			cd /TxtModule
			query_array=(jobtitle LocationWithCountry pdatewords expwords badwords overviewwords jobDurTypeWords jobTitleOtherWordsCheck no_jobs skills no_of_pos_forDesc no_of_pos_forTitle ConjuctivesRmvWords CoreWords Dept FirstWords_ToFindJob SecondWords_ToFindJob WorngTitleWords CareerDeciderWordsFirst CareerDeciderWordsSecond jobboard MailFindingWordsFirst MailFindingWordsSecond SiteEntryWords)
			echo $passwdFile| sudo -S chown root:root -R /TxtModule
			echo $passwdFile| sudo -S chmod 777 -R /TxtModule
			for i in ${query_array[@]}
				do 
					#$i
					connectionCode1="--user=grantor"
					connectionCode2="--password=YRzJNPQqmYm8795aGdHFR47d6h"
					SQLserverIP="192.168.1.15"
					echo $passwdFile| sudo -S mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT distinct $i FROM scrapperdb.matching_txts" > $i.txt
					sleep .01
					echo $passwdFile| sudo -S ex -sc '1d2|x' $i.txt
					sleep .01
				done
			touch log
			echo `date +%Y-%m-%d.%H:%M`:: The txt files were updated | cat - /TxtModule/log > temp && mv temp /TxtModule/log
			echo $passwdFile| sudo -S chmod 755 -R /TxtModule
			echo $passwdFile| sudo -S rm /TxtModule/*.*~
			sleep 120
		#else
			#zenity  --error  --title "Authentication failed" --text "Please check your password." 
		#fi

	done
