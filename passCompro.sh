#!/bin/sh
newhack=`date +%s | sha256sum | base64 | head -c 8`
cat /media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/newpass.txt >>/media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/oldpass.txt
echo $newhack >/media/sageadmin/95B3-978B/Work/Dropbox/ResearchUMN/Unsorted/newpass.txt
/home/sageadmin/Documents/123.exp
