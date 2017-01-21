#!/usr/bin/expect
set timeout 20
set user rahman
set passwordq herishen1898
set password umn1234
set new qwerty
set ip localhost
spawn -noecho ssh -q -o StrictHostKeychecking=no "$user\@$ip" "passwd"
expect "assword:"
send "$password\r"
expect "*UNIX password:"
send "$password\r"
expect "New password: "
send "$new\r"
expect "Retype new password:"
send "$new\r"
