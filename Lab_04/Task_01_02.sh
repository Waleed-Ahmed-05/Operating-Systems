#!/bin/bash
Day=$1
echo -n "Enter day (Wednesday or Friday): "
read Day
case "$Day" in
"Wednesday")
echo "Happy Day" ;;
"Friday")
echo "Blessed" ;;
    *)
echo "Invalid Day" ;;
esac
