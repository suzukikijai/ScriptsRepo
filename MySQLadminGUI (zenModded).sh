#!/bin/bash



#Machine Selection
tempserverSelection=$(zenity  --list  --title "Server selection" --column "Choose server:" "Main Server" "Test Server" )
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
usernameSQL=$(zenity --entry --text "Enter MySQL username" --entry-text "")

#Username verification
usersArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "select DISTINCT User from mysql.user;"`)
#value=$(zenity --entry --title "Window title" --text "${usersArray[@]}" --text "Insert your choice.")
#ans=$(zenity  --list  --title "Server selection" --text "Choose server:" --radiolist  --column "Pick" "${usersArray[@]}" ); echo $ans
#zenity --list --title='User Selection' --width=500 --height=600 --column='Select your username' "${usersArray[@]}"
sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "User authentication check initiated")

if [[ " ${usersArray[@]} " =~ " $usernameSQL " ]]; then
	##Extract Password
	passwordSQL=$(zenity --password --title "Enter password for $usernameSQL@$SQLserverIP" )
	sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Authentication matching in progress")
	##Password check
	mysql -h $SQLserverIP -u $usernameSQL -p$passwordSQL  -e ";"
	if [ "$?" -eq 0 ]; then #If password check successful


		####sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Initiating secure connection to server.")
		####sleep 1 | tee >(zenity --progress --auto-close --no-cancel --text "Connection established.")
		#DB Selection
		dbArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "SHOW DATABASES;"`)
		sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Listing all available database on server.")
		tempdbChoice=$(zenity --list --title="Database Selection at ${SQLserverIP}" --width=500 --height=600 --column='Select database' "${dbArray[@]}")
		dbChoice=$(echo $tempdbChoice | sed 's/\([^\|]*\).*/\1/')
		echo $dbChoice

		sleep 1 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Preparing $dbChoice for modification")
		if ! [ -z "${dbChoice}" ]; then #DB Select condition
			tableArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "USE $dbChoice; SHOW TABLES;"`)
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Securing List of tables in $dbChoice ")
			tempTableChoice=$(zenity --list --title="Table Selection for ${dbChoice} at ${SQLserverIP}" --width=500 --height=600 --column='Select table' "${tableArray[@]}")
			tableChoice=$(echo $tempTableChoice | sed 's/\([^\|]*\).*/\1/')
			echo $tableChoice
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking table status for privilege modification.")
			if ! [ -z "${tableChoice}" ]; then #table Select condition
				projectsArray=(HirrrAdmin hirrrbot hirrrscraptool hirrrwebportal jobsnatcher NormalScrap PatternScrap PerfectScrap ScrapReceiver SeleniumPerfectScrap ToolScrap)
				sleep 1 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Extracting repository list from GitHub.com/Unisave")
				tempProjectChoice=$(zenity --list --title="Project Selection for $dbChoice at $SQLserverIP" --width=500 --height=600 --column='Select table' "${projectsArray[@]}")
				projectChoice=$(echo $tempProjectChoice | sed 's/\([^\|]*\).*/\1/')
				echo $projectChoice
				
				if ! [ -z "${projectChoice}" ]; then #Project Select condition
					privilegesArray=(SELECT DELETE UPDATE INSERT "ADVANCED OPTIONS")
					tempPrivileges=$(zenity --list --title="Privileges Selection" --text="Privileges Selection $projectChoice for $dbChoice.$tableChoice at $SQLserverIP" --width=500 --height=600 --column='Select privilege' "${privilegesArray[@]}")
					privilegesFinal=$(echo $tempPrivileges | sed 's/\([^\|]*\).*/\1/')
					echo $privilegesFinal

					if ! [ -z "${privilegesFinal}" ]; then #Privilege Select condition
						sudoArray=(presoolkk mithunManohar geogeorge akhila)
						sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking $usernameSQL for grant permissions")
						if [[ " ${sudoArray[@]} " =~ " $usernameSQL " ]]; then #Main DevOps check
							sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt. \nExecution to be performed after this message.")

						else
						SuperSQLAuthUser=$(zenity --entry --text "Enter MySQL superUser username" --entry-text "User can be Akhil / Akhil / Geo / Mithun / Sooraj")
						sleep 10 | tee >(zenity --progress --pulsate --no-cancel --title "Loading superUser account authenticator.")
						sleep 10 | tee >(zenity --progress --pulsate --no-cancel --title "Important Notice (Copy and send to Sooraj on slack)" --text "Dear $SuperSQLAuthUser, \n Only give access if necessary. Please note the following information \n and convey it to Sooraj if access is provided. \n Important info \n Server: $serverSelection \n Request Initiator: $usernameSQL \n Project targetted $projectChoice \n Privilege requested: $privilegesFinal \n Database effected: $dbChoice \n Table effected: $tableChoice ")
						SuperSQLAuthPass=$(zenity --Password --title "Enter password for $SuperSQLAuthUser@$SQLserverIP" --text "Remember to Only give access if necessary.")
						if ! [ -z "${privilegesFinal}" ]; then #Privilege Select condition
							mysql -h $SQLserverIP -u $usernameSQL -p$passwordSQL  -e ";"
							if [ "$?" -eq 0 ]; then #Sudo password check successful
							sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt.")
							
							#sh -c "$0"
							fi #Sudo password check successful
						fi #Privilege Select condition
					fi #Privilege Select condition
				fi #Project Select condition
			fi #table Select condition
	    fi #DB Select condition

		
		####sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Selecting database")


		#User Selection
		####mysql --host=192.168.1.15 --user=root --password= --port=3306 -e "select User from mysql.user;" >







	else
		zenity  --error  --title "MySQL Password Authentication failed" --text "This attempt will be logged and reported to admin." 
	fi #Password check
else
	zenity  --error  --title "MySQL Unknown user Authentication failed" --text "This attempt will be logged and reported to admin." 
fi #Username Confirmed and matched
