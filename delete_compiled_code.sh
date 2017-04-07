#!/bin/bash

# Last update: 07/04/2017

# Code from Ryuzaki42 git repository Let's code (https://github.com/ryuuzaki42/lets_code.git). Enjoy it!

# Simples script to delete all the *.out comiped files from C++

echo -e "This script will delete this files\n"

ls ./*.out 2> /dev/null
ls ./*/*.out 2> /dev/null
ls ./*/*/*.out 2> /dev/null

echo -en "\nWant continue and delete this files?\n(y)es - (n)o: "
read -r continueCopy

if [ "$continueCopy" == "y" ]; then
    rm ./*.out
    rm ./*/*.out
    rm ./*/*/*.out
fi
echo -e "\nEnd of the script\n"
