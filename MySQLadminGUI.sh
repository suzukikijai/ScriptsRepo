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
		tempdbChoice=$(zenity --list --title="Database Selection" --width=500 --height=600 --text "Select database in $serverSelection that contains the table requiring modification." --column='Select database' "${dbArray[@]:1}")
		dbChoice=$(echo $tempdbChoice | sed 's/\([^\|]*\).*/\1/')
		echo $dbChoice

		sleep 1 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Preparing $dbChoice for modification")
		if ! [ -z "${dbChoice}" ]; then #DB Select condition
			tableArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "USE $dbChoice; SHOW TABLES;"`)
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Securing List of tables in $dbChoice ")
			tempTableChoice=$(zenity --list --title="Table Selection" --width=500 --height=600 --text "Select table in database '$dbChoice' at '$serverSelection' requiring privilege modification." --column='Select table' "${tableArray[@]:1}")
			tableChoice=$(echo $tempTableChoice | sed 's/\([^\|]*\).*/\1/')
			echo $tableChoice
			sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking table status for privilege modification.")
			if ! [ -z "${tableChoice}" ]; then #table Select condition
				projectsArray=(HirrrAdmin hirrrbot hirrrscraptool hirrrwebportal jobsnatcher NormalScrap PatternScrap PerfectScrap ScrapReceiver SeleniumPerfectScrap ToolScrap AutoNormalScrap)
				sleep 1 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Extracting repository list from GitHub.com/Unisave")
				tempProjectChoice=$(zenity --list --title="ProjectBot Selection" --text "Select name of project which requires privilege modification to \n table '$tableChoice' in database '$dbChoice' at '$serverSelection' " --width=500 --height=600 --column='Select table' "${projectsArray[@]}")
				projectChoice=$(echo $tempProjectChoice | sed 's/\([^\|]*\).*/\1/')
				echo $projectChoice
				
				if ! [ -z "${projectChoice}" ]; then #Project Select condition
					currentPrivArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "SELECT Table_priv FROM mysql.tables_priv WHERE User='$projectChoice';"`)
					messageCurrPriv="Current configured Privileges to $projectChoice on $dbChoice.$tableChoice at $SQLserverIP :\n `echo ${currentPrivArray[@]:1}` "
					if [ -z "${currentPrivArray}" ]; then #No Current privileges
						messageCurrPriv="Current configured Privileges to $projectChoice on $dbChoice.$tableChoice at $SQLserverIP :None"
					fi #No Current privileges
					granterArray=(GRANT REVOKE)
					tempGrantChoice=$(zenity --list --title="Privileges Selection" --text="Select if operation privilege for Project user '$projectChoice' on table '$tableChoice' in database '$dbChoice' at '$serverSelection' is \n To be given to (GRANT) \n Taken away from (REVOKE) \n \n $messageCurrPriv " --width=500 --height=600 --column='Select privilege' "${granterArray[@]}")
					grantChoice=$(echo $tempGrantChoice | sed 's/\([^\|]*\).*/\1/')
					echo $grantChoice
					IFS=":" ; for word in $grantChoice ; do 
								case $word in
									"GRANT")  TO=TO;;
									"REVOKE") TO=FROM;;
								esac
							done

					if ! [ -z "${grantChoice}" ]; then #Grant Select condition
						privilegesArray=(SELECT DELETE UPDATE INSERT)
						tempPrivileges=$(zenity --list --title="Privileges Selection" --text="Select the privilege operation to ${grantChoice} $TO \n Project user '$projectChoice' on table '$tableChoice' in database '$dbChoice' at '$serverSelection'. " --width=500 --height=600 --column='Select privilege' "${privilegesArray[@]}")
						privilegesFinal=$(echo $tempPrivileges | sed 's/\([^\|]*\).*/\1/')
						echo $privilegesFinal

						if ! [ -z "${privilegesFinal}" ]; then #Privilege Select condition
							tempHostedLocation=$(zenity  --list --title="Hosting location." --text="Please select if the project $projectChoice accesses db \n 1.Directly from '$serverSelection' as localhost \n 2.From another machine on internal office network. \n 3. Accessible from both above. " --width=500 --height=600 --column='Select host' "Localhost" "Internal Network" "Localhost + Internal")
							HostedLocationFinal=$(echo $tempHostedLocation | sed 's/\([^\|]*\).*/\1/')
							IFS=":" ; for word in $HostedLocationFinal ; do 
							   case $word in
								"Localhost")  sysConnection=A;;
								"Internal Network") sysConnection=B;;
								"Localhost + Internal") sysConnection=C;;
							   esac
							done
							echo $HostedLocationFinal
							
							sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking $usernameSQL for grant permissions")
							
							if ! [ -z "${tempHostedLocation}" ]; then #Host Select condition
								sudoArray=(presoolkk mithunManohar geogeorge akhila root)
								sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking $usernameSQL for grant permissions")
								if [[ " ${sudoArray[@]} " =~ " $usernameSQL " ]]; then #Main DevOps check
									sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt. \nExecution to be performed after this message.")
									connectionCode1="--user=grantor"
									connectionCode2="--password=YRzJNPQqmYm8795aGdHFR47d6h"
									queryA="$grantChoice $privilegesFinal ON $dbChoice.$tableChoice $TO $projectChoice@'localhost'; "
									queryB="$grantChoice $privilegesFinal ON $dbChoice.$tableChoice $TO $projectChoice@'192.168.1.%'; "
									queryC="$grantChoice $privilegesFinal ON $dbChoice.$tableChoice $TO $projectChoice@'%.hirrr.local'; "
									statusQuery=Done
											IFS=":" ; for word in $sysConnection ; do 
												case $word in
													"A") echo $queryA ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryA" ;;
													"B") echo $queryB ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryB" ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryC" ;;
													"C") echo $queryC ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryA" ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryB" ; mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryC" ;;
												esac
											done
								else
									SuperSQLAuthUser=$(zenity --entry --title="Assisted SuperUser Required" --text="Enter MySQL superUser username" --text "Contact Akhil / Akhil / Geo / Mithun / Sooraj" --entry-text "")
									sleep 3 | tee >(zenity --progress --pulsate --no-cancel --auto-close --title="SuperUser Authenticator" --text="Loading superUser account authenticator.")
									sleep 10 | tee >(zenity --progress --pulsate --no-cancel --title="Important Notice (Copy and send to Sooraj on slack)" --text "Dear $SuperSQLAuthUser, \n Only give access if necessary. Please note the following information \n and convey it to Sooraj if access is provided. \n Request Details \n  Request Initiator: $usernameSQL \n Server: $serverSelection \n Privilege Type: $grantChoice \n Project targetted $projectChoice \n Privilege requested: $privilegesFinal \n Database effected: $dbChoice \n Table effected: $tableChoice ")
									sleep 2
									SuperSQLAuthPass=$(zenity --password --title="Enter password for $SuperSQLAuthUser@$SQLserverIP" --text="Remember to Only give access if necessary.")
									if ! [ -z "${SuperSQLAuthPass}" ]; then #SuperGroupMember Activated condition
										mysql -h $SQLserverIP -u $SuperSQLAuthUser -p$SuperSQLAuthPass  -e ";"
										if [ "$?" -eq 0 ]; then #Sudo password check successful
											sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt.")
											connectionCode1="--user=grantor"
											connectionCode2="--password=YRzJNPQqmYm8795aGdHFR47d6h"
											queryA="$grantChoice $privilegesFinal ON $dbChoice.$tableChoice $TO $projectChoice@'localhost'; "
											queryB="$grantChoice $privilegesFinal ON $dbChoice.$tableChoice $TO $projectChoice@'192.168.1.%'; "
											queryC="$grantChoice $privilegesFinal ON $dbChoice.$tableChoice $TO $projectChoice@'%.hirrr.local'; "
											statusQuery=Done
											IFS=":" ; for word in $sysConnection ; do 
												case $word in
													"A") echo $queryA ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryA" ;;
													"B") echo $queryB ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryB" ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryC" ;;
													"C") echo $queryC ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryA" ;mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryB" ; mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryC" ;;
												esac
											done
										else
											zenity  --error  --title "MySQL SuperUser Password Authentication failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
										fi #Sudo password check successful
									else
										zenity  --error  --title "SuperUser Authentication Failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
									fi #SuperGroupMember Activated condition
								fi #MainDevops Check
							else
								zenity  --error  --title "Host Selection Failed" --text "Host Selection Failed \n This attempt will be logged and reported to admin."
							fi #Host Select condition
						else
							zenity  --error  --title "Privilege Selection Failed" --text "Privilege Selection Failed \n This attempt will be logged and reported to admin."
						fi #Privilege Select condition
					else
						zenity  --error  --title "Grant/Revoke Selection Failed" --text "Grant/Revoke Selection Failed \n This attempt will be logged and reported to admin."
					fi #Grant/Revoke Select condition
				else
					zenity  --error  --title "Project Selection Failed" --text "Project Selection Failed \n This attempt will be logged and reported to admin."
				fi #Project Select condition
			else
				zenity  --error  --title "Table Selection Failed" --text "Table Selection Failed \n This attempt will be logged and reported to admin."
			fi #table Select condition
		else
			zenity  --error  --title "Database Selection Failed" --text "Database Selection Failed \n This attempt will be logged and reported to admin."
	    fi #DB Select condition
	else
		zenity  --error  --title "MySQL Password Authentication failed" --text "This attempt will be logged and reported to admin." 
	fi #Password check
else
	zenity  --error  --title "MySQL Unknown user Authentication failed" --text "This attempt will be logged and reported to admin." 
fi #Username Confirmed and matched
mysql --host=$SQLserverIP  --user=grantor --password=YRzJNPQqmYm8795aGdHFR47d6h --port=3306 -e "INSERT INTO admin_logger.ProjectNewPrivilegeRequestLogger (GrantorName, RequestorName, GrantRevoke, PrivilegeName, DatabaseName, TableName, ProjectUser , ProjectHosted, RequestSourceIP, RequestedServer, StatusSQLQuery ) VALUES ( '$SuperSQLAuthUser' , '$usernameSQL', '$grantChoice' , '$privilegesFinal' , '$dbChoice' , '$tableChoice' , '$projectChoice' ,	'$HostedLocationFinal' , '$serverSelection' , '$machineIPValue' , '$statusQuery');"
