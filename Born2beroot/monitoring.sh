#!/bin/bash

printf "#Architecture: "
 uname -srvmo

printf "#CPU physical : "
 nproc --all

printf "#vCPU : "
 cat /proc/cpuinfo | grep processor | wc -l

printf "#Memory Usage: "
 free -m | awk 'NR==2{printf "%s/%sMB (%.2f%%)\n", $3,$2,$3*100/$2}'

printf "#Disk Usage: "
 df -h | awk '$NF=="/"{printf "%d%dGb (%s)\n", $3,$2,$5}'

printf "#CPU load: "
 mpstat | grep all | awk '{printf "%.2f%%\n", 100-%13}'

printf "#Last boot: "
 who -b | sed 's/^ *system boot //g'

printf "#LVM use: "
 if [ "$(lsblk | grep lvm | wc -l)" -gt 0 ] ; then printf "yes\n" ; else printf "no\n" ; fi

printf "#Connections TCP : "
 ss | grep -i tcp | wc -l | tr -d '\n'
printf " ESTABLISHED\n"

printf "#User log: "
 who | wc -l

printf "#Network: IP "
 /sbin/ifconfig | grep broadcast | sed 's/inet//g' | sed 's/netmask.*//g' | sed 's/ //g' | tr -d '\n'

printf " ("
 /sbin/ifconfig | grep 'ether ' | sed 's/.*ether //g' | sed 's/ .*//g' | tr -d '\n'
printf " )\n"

printf "#Sudo : "
 grep 'sudo:' /var/log/auth.log | grep 'COMMAND=' | wc -l | tr -d '\n'
printf " cmd\n"

exit 0
