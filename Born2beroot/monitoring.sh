#!/bin/bash

printf "#Architecture : "
 uname -srvmo

printf "#CPU physical : "
 nproc --all

printf "#vCPU : "
 cat /proc/cpuinfo | grep processor | wc -l

printf "#Memory Usage : "
 df -BM -a | grep /dev/mapper/ | awk '{sum+=$3}END{print sum}' | tr -d '\n'
printf "/"
 df -H -a | grep /dev/mapper/ | awk '{sum+=$4}END{print sum}' | tr -d '\n'
printf "GB ("
 df -BM -a | grep /dev/mapper/ | awk '{sum1+=$3 ; sum2+=$4 }END{printf "%d", sum1 / sum2 * 100}' | tr -d '\n'
printf "%%)\n"

printf "#CUP load : "
 mpstat | grep all | awk '{printf "%.2f%%\n", 100-%13}'

printf "#Last boot : "
 who -b | sed 's/^ *system boot //g'

printf "#LVM use : "
 if [ "$(lsblk | grep lvm | wc -l)" -gt 0 ] ; then printf "yes\n" ; else printf "no\n" ; fi

printf "#Connections TCP : "
 ss | grep -i tcp | wc -l | tr -d '\n'
printf " ESTABLISHED\n"

printf "#User log : "
 who | wc -l

printf "#Network : IP "
 /sbin/ifconfig | grep broadcast | sed 's/inet//g' | sed 's/netmask.*//g' | sed 's/ //g' | tr -d '\n'

printf " ("
 /sbin/ifconfig | grep 'ether ' | sed 's/.*ether //g' | sed 's/ .*//g' | tr -d '\n'
printf " )\n"

printf "#Sudo : "
 grep 'sudo:' /var/log/auth.log | grep 'COMMAND=' | wc -l | tr -d '\n'
printf " cmd\n"

exit 0
