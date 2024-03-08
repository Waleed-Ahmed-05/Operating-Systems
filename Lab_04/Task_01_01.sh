#!/bin/bash
Number01=$1
Number02=$2
Number03=$3
echo -n  "Enter 1st number: "
read Number01
echo -n "Enter 2nd number: "
read Number02
echo -n  "Enter 3rd number: "
read Number03
if [ "$Number01" -gt "$Number02" ] && [ "$Number01" -gt "$Number03" ]; then 
    echo -n "Greatest number is: $Number01"
    echo
elif [ "$Number02" -gt "$Number01" ] && [ "$Number02" -gt "$Number03" ]; then
    echo -n "Greatest number is: $Number02"
    echo
elif [ "$Number03" -gt "$Number01" ] && [ "$Number03" -gt "$Number02" ]; then 
    echo -n "Greatest number is: $Number03"
    echo
else
    echo "All number are equal to each other."
fi
