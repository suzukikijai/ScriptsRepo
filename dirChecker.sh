szPass=$(zenity --password --width=560 --title="Input this machine password")
echo $szPass| sudo -S apt-get -y install openjdk-7-jdk ;
szHost=$(zenity --entry --width=560 --title="Input ip address of host")
szUser=umn
szUserPass=umn1234


expect sshsudologin.expect $szHost $szUser $szUserPass 
