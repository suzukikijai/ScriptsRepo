#!/bin/bash
    if mount | grep /ShareDrive > /dev/null; then
        echo "ShareDrive up"
    else
        echo "ShareDrive down"
        if ! [ -d /ShareDrive ]; then
                echo "1"
                SudoPass=$(zenity --password --width=560 --title "Input machine Password")
                echo $SudoPass | sudo -S mkdir /ShareDrive
                sleep 2
                echo $SudoPass | sudo -S mount 192.168.1.102:/Share /ShareDrive
        else
                if ! ping -c1 `echo 192.168.1.102`; then
                        zenity --info --text "Please check connectivity with share server"
                else
                        SudoPass=$(zenity --password --width=560 --title "Input machine Password")
                echo $SudoPass | sudo -S apt-get install -y nfs-common
                        echo $SudoPass | sudo -S mount 192.168.1.102:/Share /ShareDrive
                fi
        fi
    fi
echo "Sleep Activated"

