#!/bin/bash



#Machine Selection
statusQuery=FAILED
sleep 3 | tee >(zenity --progress --pulsate --title "MySQL Privilege Manager" --auto-close --no-cancel --text "Welcome to the MySQL Privilege Manager \n Initiating isolated environment for MySQL Privilege Manager")
machineIPValue=$(ifconfig eth0 | grep 'inet addr:' | cut -d: -f2 | awk '{ print $1}')
LoggedInAs=$(whoami)
tempserverSelection=$(zenity  --list  --title "Server selection" --text "\n Choose server location where db requiring modification is hosted. \n " --column "Choose server:" "Main Server" "Test Server" )
serverSelection=$(echo $tempserverSelection | sed 's/\([^\|]*\).*/\1/')
echo $serverSelection
if [ "$serverSelection" == "Main Server" ]; then
    SQLserverIP=192.168.1.15
    echo $SQLserverIP
elif [ "$serverSelection" == "Test Server" ]; then
    SQLserverIP=192.168.1.14
    echo $SQLserverIP
else
	echo none
fi #Server Selection
sleep 5 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Secure encrypted shell connection in progress.")


#Login to user

##Extract Username
usernameSQL=$(zenity --entry --title "MySQL Authenticator" --text "Enter MySQL username" --entry-text "")

#Username verification
usersArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "select DISTINCT User from mysql.user;"`)
#value=$(zenity --entry --title "Window title" --text "${usersArray[@]}" --text "Insert your choice.")
#ans=$(zenity  --list  --title "Server selection" --text "Choose server:" --radiolist  --column "Pick" "${usersArray[@]}" ); echo $ans
#zenity --list --title='User Selection' --width=500 --height=600 --column='Select your username' "${usersArray[@]}"
sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "User authentication check initiated")

if [[ " ${usersArray[@]:1} " =~ " $usernameSQL " ]]; then
	##Extract Password
	passwordSQL=$(zenity --password --title "MySQL Authenticator" --text "Enter password for $usernameSQL@$SQLserverIP" )
	sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Authentication matching in progress")
	##Password check
	mysql -h $SQLserverIP -u $usernameSQL -p$passwordSQL  -e ";"
	if [ "$?" -eq 0 ]; then #If password check successful


		sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Initiating secure connection to server.")
		sleep 1 | tee >(zenity --progress --auto-close --no-cancel --text "Connection established.")
		#DB Selection
		dbArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "SHOW DATABASES;"`)
		sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Listing all available database on server.")
		tempdbChoice=$(zenity --list --title="Database Selection" --width=500 --height=600 --text "Select destination database in $serverSelection for the current import process." --column='Select database' "${dbArray[@]:1}")
		dbChoice=$(echo $tempdbChoice | sed 's/\([^\|]*\).*/\1/')
		echo $dbChoice
		sleep 1 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Preparing $dbChoice for modification")
		if ! [ -z "${dbChoice}" ]; then #DB Select condition
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Input the backup/ SQL Dump location")
			SavePath=$(zenity --file-selection --title="Local SQL backup storage location" --text "Select file to be imported to \n table '$tableChoice' in database '$dbChoice' at '$serverSelection' " --save )
			echo $SavePath
			if ! [ -z "${SavePath}" ]; then #File Select condition
				sudoArray=(presoolkk mithunManohar geogeorge akhila root)
				sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking $usernameSQL for import permissions")
				if [[ " ${sudoArray[@]} " =~ " $usernameSQL " ]]; then #Main DevOps check
					sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt. \nExecution to be performed after this message.")
					connectionCode1="--user=grantor"
					connectionCode2="--password=YRzJNPQqmYm8795aGdHFR47d6h"
					result=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 $dbChoice < $SavePath 2>&1 )
						if [ "$?" -eq 0 ]; then #Sudo password check successful
						statusQuery=Done
						else
							zenity  --error  --title "Import Operation Failed" --text "Import Operation Failed due to error: \n $result \n This attempt will be logged and reported to admin." 
						fi
				else
					SuperSQLAuthUser=$(zenity --entry --title="Assisted SuperUser Required" --text="Enter MySQL superUser username" --text "Contact Akhil / Akhil / Geo / Mithun / Sooraj" --entry-text "")
					sleep 3 | tee >(zenity --progress --pulsate --no-cancel --auto-close --title="SuperUser Authenticator" --text="Loading superUser account authenticator.")
					sleep 10 | tee >(zenity --progress --pulsate --no-cancel --title="Important Notice (Copy and send to Sooraj on slack)" --text "Dear $SuperSQLAuthUser, \n Only give access if necessary. Please note the following information \n and convey it to Sooraj if access is provided. \n Import Request Details \n  Request Initiator: $usernameSQL \n Server: $serverSelection \n Imported Filename: $SavePath \n Database effected: $dbChoice \n Table effected: $tableChoice ")
					sleep 2
					
					SuperSQLAuthPass=$(zenity --password --title="Enter password for $SuperSQLAuthUser@$SQLserverIP" --text="Remember to Only give access if necessary.")
					if ! [ -z "${SuperSQLAuthPass}" ]; then #SuperGroupMember Activated condition
						mysql -h $SQLserverIP -u $SuperSQLAuthUser -p$SuperSQLAuthPass  -e ";"
						if [ "$?" -eq 0 ]; then #Sudo password check successful
							sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt.")								
							connectionCode1="--user=grantor"
							connectionCode2="--password=YRzJNPQqmYm8795aGdHFR47d6h"
							result=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 $dbChoice < $SavePath 2>&1 )
							if [ "$?" -eq 0 ]; then #Sudo password check successful
							statusQuery=Done
							else
								zenity  --error  --title "Import Operation Failed" --text "Import Operation Failed due to error: \n $result \n This attempt will be logged and reported to admin." 
							fi
						else
							zenity  --error  --title "MySQL SuperUser Password Authentication failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
						fi #Sudo password check successful
					else
						zenity  --error  --title "SuperUser Authentication Failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
					fi #SuperGroupMember Activated condition
				fi #MainDevops Check
			else
				zenity  --error  --title "File Upload Failed" --text "Host Selection Failed \n This attempt will be logged and reported to admin. \n Please check the uploaded file for "
			fi #File Select condition
		else
			zenity  --error  --title "Database Selection Failed" --text "Database Selection Failed \n This attempt will be logged and reported to admin."
	    fi #DB Select condition
	else
		zenity  --error  --title "MySQL Authentication failed: Password " --text "This attempt will be logged and reported to admin." 
	fi #Password check
else
	zenity  --error  --title "MySQL Authentication failed: Unknown user" --text "This attempt will be logged and reported to admin." 
fi #Username Confirmed and matched
mysql --host=$SQLserverIP  --user=grantor --password=YRzJNPQqmYm8795aGdHFR47d6h --port=3306 -e "INSERT INTO admin_logger.importLog (GrantorName, RequestorName, FileName, DatabaseName, TableName, RequestedSourceIP, RequestedServer, StatusSQLQuery) VALUES ('$SuperSQLAuthUser', '$usernameSQL', '$SavePath', '$dbChoice', '$tableChoice', '$serverSelection' , '$machineIPValue' , '$statusQuery');"
