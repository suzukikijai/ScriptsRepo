#!/bin/bash  
mv /media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN/ip.txt /media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN/Logs/LogWeek-`date +%U`.txt
echo Previous week IP change logs stored in `date +%U`.txt /n The Static UMN IP is 122.165.116.168 /n The Active UMN IP during `date +%Y-%m-%d.%H:%M` is `wget http://ipinfo.io/ip -qO - `> /media/sageadmin/95B3-978B/Work/Dropbox/WorkUMN/ipa.txt

