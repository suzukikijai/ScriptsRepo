#!/bin/bash
ICON=/usr/share/app-install/icons/kalarm-active.png	# Existing icon?
SOUND=$HOME/Audio/2tone.wav				# Your sound pref.
NAMECANDID=$(zenity --entry --width=560 --text "Enter Candidate name" --entry-text "")
EMAILCANDID=$(zenity --entry --width=560 --text "Enter Candidate mail-ID" --entry-text "")
MOBCANDID=$(zenity --entry --width=560 --text "Enter Candidate Contact Number" --entry-text "")
EXAMSTARTTIME=`date +%Y-%m-%d.%H:%M::%S`
COUNT=$(zenity --title "Exam Timer" --window-icon $ICON --text "Default Time is 1hour"\
    --entry-text "1h" --entry)				# Input dialogue.
if [ $? = 1 ]; then exit $?; fi

# Determine number of seconds to count down from depending on input suffix.
case "${COUNT: -1}" in
    "S" | "s" ) COUNT=$(echo $COUNT | sed -s "s/[Ss]//") ;;
    "M" | "m" ) COUNT=$(echo $COUNT | sed -s "s/[Mm]//"); ((COUNT*=60)) ;;
    "H" | "h" ) COUNT=$(echo $COUNT | sed -s "s/[Hh]//"); ((COUNT*=3600)) ;;
    *         ) zenity --error --text "<span color=\"red\"><b>\
    \nUse the form of 10s or 5m or 2h\nNo decimals allowed either.</b></span>"
    sh -c "$0"                                            # On error restart.
    exit ;;
esac

START=$COUNT                                              # Set a start point. 

until [ "$COUNT" -eq "0" ]; do                            # Countdown loop.
    ((COUNT-=1))                                          # Decrement seconds.
	echo The Candidate `echo $NAMECANDID` with email ID `echo $EMAILCANDID` and mobile number `echo $MOBCANDID` initiated exam at `echo $EXAMSTARTTIME` and ended at `date +%Y-%m-%d.%H:%M::%S` > /var/www/`echo $NAMECANDID`-Log.txt
    PERCENT=$((100-100*COUNT/START))                      # Calc percentage.
	if [ $PERCENT = 50 ]; then `notify-send -i $ICON 'Half Time Alert' 'You have reached halftime'`; fi	
	if [ $PERCENT = 90 ]
		then `notify-send -i $ICON 'Last 5 min Alert' 'Only 5 min remaining'`; fi
	if [ $PERCENT -gt 90 ]
		then
			for i in {$COUNT..0..1}
				do 
					killall notify-osd
					notify-send "Time Alert" $COUNT
					#sleep 1
				done
	fi;
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
sleep 15 && notify-send 'Lockdown Alert' 'System Lockdown in 5 sec' && 	gnome-screensaver-command -l
/usr/bin/canberra-gtk-play --volume 4 -f $SOUND           # Ding-dong finish!
zenity --notification --window-icon="$ICON"\
    --text "Exam Timer > ## TIMES UP ##"                   # Indicate finished!

