#!/bin/bash
factorial() 
{
if [ $1 -eq 1 ]; then 
echo "1"
else 
Factorial=$(factorial $(($1 - 1)))
echo $(($Factorial * $1))
fi
}

main() 
{
local Number=$1
echo -n "Enter a number: "
read Number
local Factorial=$(factorial $Number)
echo "Factorial of $Number is $Factorial."
}
main "$@"
