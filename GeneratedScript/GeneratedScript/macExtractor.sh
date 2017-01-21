#!/bin/bash
macValues=`ifconfig -a | grep -o -E '([[:xdigit:]]{1,2}:){5}[[:xdigit:]]{1,2}'`
ipValues=`ifconfig -a | grep 'inet addr:' | cut -d: -f2 | awk '{ print $1}'`
echo $macValues
echo $ipValues
zenity --info --text "Mac is $macValues. \nCurrent IP is $ipValues"
