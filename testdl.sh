#!/bin/bash  
url=http://www.moviemint.com/wp-content/gallery/
count=`awk 'END {print NR}' test.txt`
for((i=1;i<=$count;i+=1));
do
# [ -s test.txt ] && $count=1 || $count=0 
szUrl=$(head -n 1 test.txt)&& echo -e "$(sed '1d' test.txt)" > test.txt && wget -r --output-file=logfile.log ‐‐accept jpg,JPG --random-wait -np -nH --cut-dirs=1 -R index.html $url$szUrl
done
echo Extract over
