#!/bin/bash

#SHADW file check
zenity  --info  --title "HirrrDaemon Manager Notification" --text "Successfully initiated TextUpdation Daemon"
SHADW="/bin/shadwTxtModBash"
if [ -f $SHADW ];
then
	passwdFile=`cat $SHADW`
	echo $passwdFile| sudo -S echo gello
	result2=$(sudo -S echo gello)
#		if [ -z "${result2}" ]; then
#			zenity  --error  --title "HirrrDaemon Manager Notification" --text "Password error. Reset password"
#			echo $passwdFile| sudo -S rm $SHADW
#		fi
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
#dir_array=(country_AE)
#dir_array=(SELECT directoryName FROM text_module.countrySpecificBinding;)

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
		tempdir_array=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT directoryName FROM text_module.countrySpecificBinding;" 2>&1 )
		dir_array=("${tempdir_array[@]:14}")
		for j in ${dir_array[@]}
			do
			dirLocation="/home/umn/Videos/solr-4.10.3/example/solr/$j/conf"
				if [ -d $dirLocation ]; then
					cd /$dirLocation
					query_array=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT TableName FROM text_module.countrySpecificBinding  WHERE directoryName LIKE '$j';" 2>&1 )
					commons_array=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT tableFileName FROM text_module.commonContent;" 2>&1 )
					for i in ${query_array[@]:9}
						do 
							echo $i
							echo $passwdFile| sudo -S chmod 777 locations.txt
							mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT value FROM text_module.$i" > locations.txt
							sleep .01
							echo $passwdFile| sudo -S ex -sc '1d1|x' locations.txt
							sleep .01
							echo $passwdFile| sudo -S chmod 755 locations.txt
						done
					for a in ${commons_array[@]:13}
						do 
							echo $a
							echo $passwdFile| sudo -S chmod 777 $a.txt
							mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "SELECT value FROM text_module.$a" > $a.txt
							sleep .01
							echo $passwdFile| sudo -S ex -sc '1d1|x' $a.txt
							sleep .01
							echo $passwdFile| sudo -S chmod 755 $a.txt
						done
				else
					zenity  --error  --title "HirrrDaemon Manager Notification" --text "The directory $dirLocation does not exist."
				fi
			done
		echo $passwdFile| sudo -S chmod 777 log
		echo $passwdFile| sudo -S touch log
		echo `date +%Y-%m-%d.%H:%M`:: The txt files were updated | cat - log > temp && mv temp log
		echo $passwdFile| sudo -S chmod 755 log
	fi
echo "Sleep Activated"

#else
#	zenity  --error  --title "Authentication failed" --text "Please check your password." 
#fi
