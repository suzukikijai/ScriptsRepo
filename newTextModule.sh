#!/bin/bash

#SHADW file check
zenity  --info  --title "HirrrDaemon Manager Notification" --text "Successfully initiated TextUpdation Daemon"
while :
	do
		SHADW="/bin/shadwTxtModBash"
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
			passwdFile="herishen1898"
			#passwdFile=$(zenity --password --title "TxtModule Authenticator Setup" )
			#echo $passwdFile| sudo -S echo gello
			#result1=$(sudo echo gello)
			#if ! [ -z "${result1}" ]; then
			   echo $passwdFile > /tmp/tempPasswdFile
			   echo $passwdFile| sudo -S mv /tmp/tempPasswdFile $SHADW
			#else
			#	zenity  --error  --title "Setup failed" --text "Please check your password."
			#fi
		fi
		#Main Function
		#result=$(sudo echo gello)
		#if ! [ -z "${result}" ]; then
			cd /TxtModule
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
				query_array=(`mysql  --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306  -e "USE text_module; SHOW TABLES;"`)
				echo $passwdFile| sudo -S chown root:root -R /TxtModule
				echo $passwdFile| sudo -S chmod 777 -R /TxtModule
				for i in ${query_array[@]}
					do 
						#$i
						
						echo $passwdFile| sudo -S mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT * FROM text_module.$i" > $i.txt
						sleep .01
						echo $passwdFile| sudo -S ex -sc '1d2|x' $i.txt
						sleep .01
					done
				touch log
				echo `date +%Y-%m-%d.%H:%M`:: The txt files were updated | cat - /TxtModule/log > temp && mv temp /TxtModule/log
				echo $passwdFile| sudo -S chmod 755 -R /TxtModule
				echo $passwdFile| sudo -S rm /TxtModule/*.*~
				sleep 120
			fi
		#else
		#	zenity  --error  --title "Authentication failed" --text "Please check your password." 
		#fi

	done
