#!/bin/bash

#SHADW file check
zenity  --info  --title "HirrrDaemon Manager Notification" --text "Successfully initiated TextUpdation Daemon"

		SHADW="/bin/shadwTxtModBash"
		dirLocation=TxtModule
		if [ -f $SHADW ];
			then
			passwdFile=`cat $SHADW`
			echo $passwdFile| sudo -S echo gello
			#result2=$(sudo -S echo gello)
			#if [ -z "${result2}" ]; then
			#	zenity  --error  --title "HirrrDaemon Manager Notification" --text "Password error. Reset password"
			#	echo $passwdFile| sudo -S rm $SHADW
			#fi
		else
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Password cache empty. Reconfiguring TxtModule authenticator.")
			
			passwdFile=$(zenity --password --title "TxtModule Authenticator Setup" )
			echo $passwdFile| sudo -S echo gello
			result1=$(sudo echo gello)
			if ! [ -z "${result1}" ]; then
			   echo $passwdFile > /tmp/tempPasswdFile
			   echo $passwdFile| sudo -S mv /tmp/tempPasswdFile $SHADW
			else
				zenity  --error  --title "Setup failed" --text "Please check your password."
			fi
		fi
		#Main Function
		#result=$(sudo echo gello)
		#if ! [ -z "${result}" ]; then
			cd /$dirLocation
			connectionCode1="--user=monitorBot"
			connectionCode2="--password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn"
			SQLserverIP="192.168.1.15"
			result=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e ";" 2>&1 )
				if [ "$?" -eq 0 ]; then #Sudo password check successful
				statusQuery=Done
				else
					zenity  --error  --title "Sync Failed" --text "Sync Failed due to error: \n $result \n This attempt will be logged and reported to admin." 
				fi
			if [[ " $statusQuery " =~ "Done" ]]; then
				query_array=(skills  ATSDecidingWords CareerDeciderWordsFirst CareerDeciderWordsSecond CareerSectionFindWords CheckApplyWordsLink ConjuctivesRmvWords Dept FirstWords_ToFindJob FormDecidingWords ForwardLinkWords LocationWithCountry LocationWithDuplication LocationWithSpell MailFindingWordsFirst MailFindingWordsSecond NextFirstWordsToFindJob PvtWords RmvWordsFrmLink SecondWords_ToFindJob SiteEntryWords URLcareersWords1 WrongTitleWords absentlocation badwords baseUrl country_code expwords jobDurTypeWords jobDurationwords jobTitleOtherWordsCheck jobboard jobtitle locationGroupForAE locationGroupForAU locationGroupForBH locationGroupForIN locationGroupForKW locationGroupForMY locationGroupForNZ locationGroupForOM locationGroupForQA locationGroupForSA locationGroupForSG locationsBigList no_jobs no_of_pos_forDesc no_of_pos_forTitle overviewwords pdatewords rmvWordsFrmName)
				echo $passwdFile| sudo -S chown root:root -R /$dirLocation
				echo $passwdFile| sudo -S chmod 777 -R /$dirLocation
				for i in ${query_array[@]}
					do 
						#$i
						
						echo $passwdFile| sudo -S mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT value FROM text_module.$i order by id$i" > $i.txt
						sleep .01
						echo $passwdFile| sudo -S ex -sc '1d1|x' $i.txt
						sleep .01
					done
				touch log
				echo `date +%Y-%m-%d.%H:%M`:: The txt files were updated | cat - /$dirLocation/log > temp && mv temp /$dirLocation/log
				echo $passwdFile| sudo -S chmod 755 -R /$dirLocation

			fi
		#else
		#	zenity  --error  --title "Authentication failed" --text "Please check your password." 
		#fi


