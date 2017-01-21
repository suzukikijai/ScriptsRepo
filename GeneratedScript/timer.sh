#!/bin/bash
#Program by Sooraj Antony
#Vers 1.3

ICON=/usr/share/app-install/icons/kalarm-active.png	# Icon Selection (Optional)
SOUND=$HOME/Audio/2tone.wav				# Sound Selection (Optional)


#VariableDecalaration
NAMECANDID=$(zenity --entry --width=560 --text "Enter Candidate name" --entry-text "")			# Candidate Name Collection
EMAILCANDID=$(zenity --entry --width=560 --text "Enter Candidate mail-ID" --entry-text "")		# Candidate Email ID Collection
MOBCANDID=$(zenity --entry --width=560 --text "Enter Candidate Contact Number" --entry-text "")		# Candidate Mobile Number Collection
EXAMFILENAME=`date +%Y-%m-%d.%H-%M-%S`					# Randomised ID generation for candidate
EXAMSTARTTIME=`date +%Y-%m-%d.%H:%M::%S`								# Logging starting time for exam
SudoPass=`cat /opt/shadw`										# Optional sudoers.rx
COUNT=$(zenity --title "Exam Timer" --window-icon $ICON --text "Default Time is 1hour" --entry-text "1h" --entry)										



# Input time dialogue.
if [ $? = 1 ]; then exit $?; fi
# Determine number of seconds to count down from depending on input suffix.
case "${COUNT: -1}" in
    "S" | "s" ) COUNT=$(echo $COUNT | sed -s "s/[Ss]//") ;;
    "M" | "m" ) COUNT=$(echo $COUNT | sed -s "s/[Mm]//"); ((COUNT*=60)) ;;
    "H" | "h" ) COUNT=$(echo $COUNT | sed -s "s/[Hh]//"); ((COUNT*=3600)) ;;
    *         ) zenity --error --text "<span color=\"red\"><b>\
    \nUse the form of 10s or 5m or 2h\nNo decimals allowed either.</b></span>"
    sh -c "$0"                                            						# On error restart.
    exit ;;
esac



#Input Exam Type using Radio Buttons
TestType=$(zenity  --list  --text "Choose position applied " --radiolist  --column "Pick" --column "Position" FALSE Testers FALSE "Java DevOps" FALSE ResearchOps) 

case "$TestType" in
    "Testers")zenity --error --text "Please contact Mr. Akhil for instructions" & ;;
    "Java DevOps") wget https://www.dropbox.com/s/cgd1hzd6oixy58o/Technical%20Round.pdf?dl=1 -O  ~/Desktop/`echo $EMAILCANDID`quiz.pdf  && zenity --error --text "Please complete the given questions in 1hr. Timer will be initiated shortly " && echo $SudoPass | sudo -S service network-manager stop && gnome-open ~/Desktop/`echo $EMAILCANDID`quiz.pdf && /opt/eclipse/eclipse & ;;
    "ResearchOps" ) zenity --error --text "Please complete the given questions in 1hr. Timer will be displayed shortly " && firefox https://goo.gl/forms/TKbiyEO1JcUszlMj1 & ;;
    *         ) zenity --error --text "<span color=\"red\"><b>\
    \nUnknown Format</b></span>"
    sh -c "$0"                                            # On error restart.
    exit ;;
esac




#Input accepted exam start greeting
notify-send -i $ICON 'Exam has initiated' 'Good Luck with the test';

START=$COUNT                                              # Set a start point. 

until [ "$COUNT" -eq "0" ]; do                            # Countdown loop.
    ((COUNT-=1))                                          # Decrement seconds.
	 #Candidate Log file setup
	echo The Candidate `echo $NAMECANDID` with email ID `echo $EMAILCANDID` and mobile number `echo $MOBCANDID` initiated exam for `echo $TestType`  at `echo $EXAMSTARTTIME` and ended at `date +%Y-%m-%d.%H:%M::%S` > /var/www/Log-$EXAMFILENAME.txt

    PERCENT=$((100-100*COUNT/START))                      # Calc percentage.
	
	if [ $PERCENT = 50 ]; then `notify-send -i $ICON 'Half Time Alert' 'You have reached halftime'`; fi	#Halftime Alert Notification
	if [ $PERCENT = 90 ]
		then `notify-send -i $ICON 'Last 5 min Alert' 'Only 5 min remaining'`; fi			#LastTime Alert Notification
	#Last Countdown 2% time remaining
	if [ $PERCENT -gt 98 ] 
		then
			for i in {$COUNT..0..1}
				do 
					killall notify-osd
					remainTime=`echo "obase=60;$COUNT" | bc`
					notify-send "Time Alert" $remainTime
					#sleep 1
				done
	fi;
	#10 minute remainder
	if [ $(($COUNT % 600 )) -eq 0 ]
		then
			killall notify-osd
			remainTime=`echo "obase=60;$COUNT" | bc`
			notify-send "Time Alert" $remainTime
		fi;

    echo "#Do Not Close this window. \n Time remaining:$(echo "obase=60;$COUNT" | bc)"  # Convert to H:M:S.
    echo $PERCENT                                         # Output for progbar.
    sleep 1
done | zenity --title "Exam Timer" --progress --percentage=0 --text=""\
    --window-icon=$ICON --auto-close                      # Progbar/time left.
if [ $? = 1 ]; then exit $?; fi
notify-send -i $ICON "Exam Timer >TIMES UP"		# Attention finish!
sleep 15 && notify-send 'Lockdown Alert' 'System Lockdown in 5 sec' && 	gnome-screensaver-command -l #machine Lock
/usr/bin/canberra-gtk-play --volume 4 -f $SOUND           # Ding-dong finish!
zenity --notification --window-icon="$ICON"\
    --text "Exam Timer > ## TIMES UP ##"                   # Indicate finished!

