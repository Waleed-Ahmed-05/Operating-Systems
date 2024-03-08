#!/bin/bash
Number=$1
Duplicate=$1
Sum=0
echo -n "Enter any number: "
read Number
Duplicate=$Number
while [ $Number -gt 0 ];
do
Digit=$((Number % 10))     
Sum=$((Sum + Digit))
Number=$((Number / 10))    
done
echo "Sum of digits of $Duplicate = $Sum"

