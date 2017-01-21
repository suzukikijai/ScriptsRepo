#!/bin/bash
SudoPass=$(zenity --password --width=560 --title "Input machine Password")
echo $SudoPass | sudo -S rm /TxtModule/AUSTRALIA.txt
echo $SudoPass | sudo -S rm /TxtModule/BAHRAIN.txt
echo $SudoPass | sudo -S rm /TxtModule/INDIA.txt
echo $SudoPass | sudo -S rm /TxtModule/KUWAIT.txt
echo $SudoPass | sudo -S rm /TxtModule/MALAYSIA.txt
echo $SudoPass | sudo -S rm /TxtModule/NEW_ZEALAND.txt
echo $SudoPass | sudo -S rm /TxtModule/NIGERIA.txt
echo $SudoPass | sudo -S rm /TxtModule/OMAN.txt
echo $SudoPass | sudo -S rm /TxtModule/PHILIPPINES.txt
echo $SudoPass | sudo -S rm /TxtModule/QATAR.txt
echo $SudoPass | sudo -S rm /TxtModule/SAUDI_ARABIA.txt
echo $SudoPass | sudo -S rm /TxtModule/SINGAPORE.txt
echo $SudoPass | sudo -S rm /TxtModule/SOUTH_AFRICA.txt
echo $SudoPass | sudo -S rm /TxtModule/UAE.txt
