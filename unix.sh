#!/usr/bin/env bash

if [ "$(uname -s)" == "Darwin" ] # macOS
then
echo "Darwin"

elif [ "$(expr substr $(uname -s) 1 5)" == "Linux" ] # Linux
then
echo "Linux"

elif [ "$(expr substr $(uname -s) 1 5)" == "MINGW" ] # MINGW or Git Bash (under Windows)
then
echo "MINGW"

else
echo -e "\033[31mYour system cannot be recognized, please contact the developer.\033[0m\n"
echo -e "\033[34mEmail developer at NOTHING567@PixELWine.Com.CN .\033[0m\n"
exit 255

fi
