#!/bin/bash



#Machine Selection
statusQuery=FAILED
#sleep 3 | tee >(zenity --progress --pulsate --title "MySQL Alter Manager" --auto-close --no-cancel --text "Welcome to the MySQL Table Modification Manager \n Initiating isolated environment for service")
machineIPValue=$(ifconfig eth0 | grep 'inet addr:' | cut -d: -f2 | awk '{ print $1}')
LoggedInAs=$(whoami)
tempserverSelection=$(zenity  --list  --title "Server selection" --text "\n Choose server location where db requiring modification is hosted. \n " --column "Choose server:" "Main Server" "Test Server" )
serverSelection=$(echo $tempserverSelection | sed 's/\([^\|]*\).*/\1/')
echo $serverSelection
if [ "$serverSelection" == "Main Server" ]; then
    SQLserverIP=localhost
    echo $SQLserverIP
elif [ "$serverSelection" == "Test Server" ]; then
    SQLserverIP=localhost
    echo $SQLserverIP
else
	echo none
fi #Server Selection
#sleep 5 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Secure encrypted shell connection in progress.")
#Login to user
##Extract Username
usernameSQL=$(zenity --entry --title "MySQL Authenticator" --text "Enter MySQL username" --entry-text "")
#Username verification
usersArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "select DISTINCT User from mysql.user;"`)
#value=$(zenity --entry --title "Window title" --text "${usersArray[@]}" --text "Insert your choice.")
#ans=$(zenity  --list  --title "Server selection" --text "Choose server:" --radiolist  --column "Pick" "${usersArray[@]}" ); echo $ans
#zenity --list --title='User Selection' --width=500 --height=600 --column='Select your username' "${usersArray[@]}"
#sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "User authentication check initiated")
if [[ " ${usersArray[@]:1} " =~ " $usernameSQL " ]]; then
	##Extract Password
	passwordSQL=$(zenity --password --title "MySQL Authenticator" --text "Enter password for $usernameSQL@$SQLserverIP" )
	#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Authentication matching in progress")
	##Password check
	mysql -h $SQLserverIP -u $usernameSQL -p$passwordSQL  -e ";"
	if [ "$?" -eq 0 ]; then #If password check successful
		#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Initiating secure connection to server.")
		#sleep 1 | tee >(zenity --progress --auto-close --no-cancel --text "Connection established.")
		#DB Selection
		dbArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "SHOW DATABASES;"`)
		#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Listing all available database on server.")
		tempdbChoice=$(zenity --list --title="Database Selection" --width=500 --height=600 --text "Select database in $serverSelection that contains the table requiring modification." --column='Select database' "${dbArray[@]:1}")
		dbChoice=$(echo $tempdbChoice | sed 's/\([^\|]*\).*/\1/')
		echo $dbChoice
		#sleep 1 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Preparing $dbChoice for modification")
		if ! [ -z "${dbChoice}" ]; then #DB Select condition
			tableArray=( `mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "USE $dbChoice; SHOW TABLES;"`)
			#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Securing List of tables in $dbChoice ")
			tempTableChoice=$(zenity --list --title="Table Selection" --width=500 --height=600 --text "Select table in database '$dbChoice' at '$serverSelection' requiring privilege modification." --column='Select table' "${tableArray[@]:1}")
			tableChoice=$(echo $tempTableChoice | sed 's/\([^\|]*\).*/\1/')
			echo $tableChoice
			#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking table status for alter modification.")
			if ! [ -z "${tableChoice}" ]; then #table Select condition
				columnArray=(`mysql -h $SQLserverIP --user=monitorBot --password=zZF95SaU3DRDQSV6H4w3PnYUHhcHn --port=3306 -e "SELECT COLUMN_NAME FROM information_schema.columns where TABLE_NAME='$tableChoice' AND TABLE_SCHEMA='$dbChoice' ; "` "===============Add new column==============")
				#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Securing List of columns in $dbChoice ")
				tempColumnChoice=$(zenity --list --title="Column Selection" --width=500 --height=600 --text "Select table in database '$dbChoice' at '$serverSelection' requiring privilege modification." --column='Select table' "${columnArray[@]:1}")
				columnChoice=$(echo $tempTableChoice | sed 's/\([^\|]*\).*/\1/')
				echo $columnChoice
				#sleep 2 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking column status for alter modification.")
				if ! [ -z "${columnChoice}" ]; then #Column Select condition
					sudoArray=(presoolkk mithunManohar geogeorge akhila root)
					#sleep 3 | tee >(zenity --progress --pulsate --auto-close --no-cancel --text "Checking $usernameSQL for grant permissions")
					if [[ " ${sudoArray[@]} " =~ " $usernameSQL " ]]; then #Main DevOps check
						#sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt. \nExecution to be performed after this message.")
						queryA=$(zenity --entry --title "MySQL Authenticator" --text "Enter only ALTER Query. \n Remove unnecessary spaces. \n Execute only one alter command at a time." --entry-text "Remove unnecesary spaces/tabs/symbols")
						if echo $queryA | grep -q '\(;\).*\1' #Injection check
						then
							zenity  --error  --title "MySQL Query Error" --text "Query syntax error \n check for multiple queries? \n This attempt will be logged and reported to admin."
						else
							if [[ ( ${queryA:0:5} == "ALTER" ) || ( ${queryA:0:5} == "alter" ) ]] #Alter confirmation
							then
								connectionCode1="--user=importBot"
								connectionCode2="--password=n6e4y6C4PD32H6MdVEP3PUA3Hv"
								echo $queryA
								result=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryA" ; 2>&1 )
								if [ "$?" -eq 0 ]; then #Worked Code check successful
								statusQuery=Done
								else
									zenity  --error  --title "Alter Operation Failed" --text "Import Operation Failed due to error: \n $result \n This attempt will be logged and reported to admin." 
								fi #Worked Code check successful
							else
							zenity  --error  --title "MySQL Query Error" --text "Query syntax error \n check for multiple queries? \n This attempt will be logged and reported to admin."
							fi #Alter confirmation
						fi #Injection check
					else
						SuperSQLAuthUser=$(zenity --entry --title="Assisted SuperUser Required" --text="Enter MySQL superUser username" --text "Contact Akhil / Akhil / Geo / Mithun / Sooraj" --entry-text "")
						#sleep 3 | tee >(zenity --progress --pulsate --no-cancel --auto-close --title="SuperUser Authenticator" --text="Loading superUser account authenticator.")
						#sleep 10 | tee >(zenity --progress --pulsate --no-cancel --title="Important Notice (Copy and send to Sooraj on slack)" --text "Dear $SuperSQLAuthUser, \n Only give access if necessary. Please note the following information \n and convey it to Sooraj if access is provided. \n Request Details \n  Request Initiator: $usernameSQL \n Server: $serverSelection \n Privilege Type: $grantChoice \n Project targetted $projectChoice \n Privilege requested: $privilegesFinal \n Database effected: $dbChoice \n Table effected: $tableChoice ")
						#sleep 2
						SuperSQLAuthPass=$(zenity --password --title="Enter password for $SuperSQLAuthUser@$SQLserverIP" --text="Remember to Only give access if necessary.")
						if ! [ -z "${SuperSQLAuthPass}" ]; then #SuperGroupMember Activated condition
							mysql -h $SQLserverIP -u $SuperSQLAuthUser -p$SuperSQLAuthPass  -e ";"
							if [ "$?" -eq 0 ]; then #Sudo password check successful
								#sleep 5 | tee >(zenity --progress --pulsate --no-cancel --title "Logging details of current successful attempt.")
								
								queryA=$(zenity --entry --title "MySQL Authenticator" --text "Enter only ALTER Query. \n Remove ';' at end of query \n Remove unnecessary spaces. \n Execute only one alter command at a time." --entry-text "Remove unnecesary spaces/tabs/symbols")
								if echo $queryA | grep -q '\(;\).*' #Injection check
								then
									zenity  --error  --title "MySQL Query Error" --text "Query syntax error \n check for multiple queries? \n This attempt will be logged and reported to admin."
								else
									if [[ ( ${queryA:0:5} == "ALTER" ) || ( ${queryA:0:5} == "alter" ) ]] #Alter confirmation
									then
										connectionCode1="--user=importBot"
										connectionCode2="--password=n6e4y6C4PD32H6MdVEP3PUA3Hv"
										echo $queryA
										result=$(mysql --host=$SQLserverIP $connectionCode1 $connectionCode2 --port=3306 -e "$queryA" ; 2>&1 )
										if [ "$?" -eq 0 ]; then #Worked Code check successful
										statusQuery=Done
										else
											zenity  --error  --title "Alter Operation Failed" --text "Import Operation Failed due to error: \n $result \n This attempt will be logged and reported to admin." 
										fi #Worked Code check successful
									else
									zenity  --error  --title "MySQL Query Error" --text "Query syntax error \n check for multiple queries? \n This attempt will be logged and reported to admin."
									fi #Alter confirmation
								fi #Injection check
							else
								zenity  --error  --title "MySQL SuperUser Password Authentication failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
							fi #Sudo password check successful
						else
							zenity  --error  --title "SuperUser Authentication Failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
						fi #SuperGroupMember Activated condition
					fi #MainDevops Check
				else
							zenity  --error  --title "SuperUser Authentication Failed" --text "SuperUser Authentication Failed \n This attempt will be logged and reported to admin." 
				fi #Column Select condition
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
#mysql --host=$SQLserverIP  --user=grantor --password=YRzJNPQqmYm8795aGdHFR47d6h --port=3306 -e "INSERT INTO admin_logger.ProjectNewPrivilegeRequestLogger (GrantorName, RequestorName, GrantRevoke, PrivilegeName, DatabaseName, TableName, ProjectUser , ProjectHosted, RequestSourceIP, RequestedServer, StatusSQLQuery ) VALUES ( '$SuperSQLAuthUser' , '$usernameSQL', '$grantChoice' , '$privilegesFinal' , '$dbChoice' , '$tableChoice' , '$projectChoice' ,	'$HostedLocationFinal' , '$serverSelection' , '$machineIPValue' , '$statusQuery');"
mysql --host=$SQLserverIP  --user=grantor --password=YRzJNPQqmYm8795aGdHFR47d6h --port=3306 -e "INSERT INTO admin_logger.AlterLogger (GrantorName, RequestorName, QueryLog, DatabaseName, ColumnName, TableName, RequestedSourceIP, RequestedServer, StatusSQLQuery ) VALUES ( '$SuperSQLAuthUser' , '$usernameSQL', '$queryA' , '$dbChoice' , '$columnChoice' , '$tableChoice' , '$serverSelection' , '$machineIPValue' , '$statusQuery');"
