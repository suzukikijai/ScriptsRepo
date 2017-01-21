for i in {0..100..10}
    do
          killall notify-osd
          notify-send "testing" $i
          sleep 1
    done
