ifconfig | grep "ether" | awk '$1=$1' | cut -c 7- | awk '{print $1;}'


