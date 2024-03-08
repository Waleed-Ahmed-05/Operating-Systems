#!/bin/bash
main() 
{
local Number=$1
echo -n "Enter any number: "
read Number
local Reverse=$(reverse $Number)
palindromeCheck $Number $Reverse
}
reverse() 
{
local Number=$1
local Reverse=0
while [ $Number -gt 0 ]; do
Reverse=$((Reverse * 10 + Number % 10))
Number=$((Number / 10))
done
echo "$Reverse"
}

palindromeCheck() 
{
local Number=$1
local Reverse=$2
if [ $Number -eq $Reverse ]; then
echo "The number $Number is a palindrome."
else
echo "The number $Number is not a palindrome."
fi
}
main "$@"
