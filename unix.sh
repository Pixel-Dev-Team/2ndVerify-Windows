#!/usr/bin/env bash
prefix=/usr/local/

user=$(whoami)
macOSInstallationScript=./ins/darwin.sh
LinuxInstallationScript=./ins/linux.sh
WinNTInstallationScript=./ins/win.sh

if [ "$(uname -s)" == "Darwin" ] # macOS
then
echo "[detect] Your system has been recognized as macOS"
echo "[step] Adding necessary permissions to the file $macOSInstallationScript."
echo "[hint] You may need to enter your password."
sudo chmod +x $macOSInstallationScript
echo "[step] \"2ndVerify for unix-like systems\" installation assistant is ready."
echo "[step] Starting the installation program..."
$macOSInstallationScript $prefix

elif [ "$(expr substr $(uname -s) 1 5)" == "Linux" ] # Linux
then
# echo "Linux"
echo "[detect] Your system has been recognized as Linux"
echo "[step] Adding necessary permissions to the file $LinuxInstallationScript."
echo "[hint] You may need to enter your password."
sudo chmod +x $LinuxInstallationScript
echo "[step] \"2ndVerify for unix-like systems\" installation assistant is ready."
echo "[step] Starting the installation program..."
$LinuxInstallationScript $prefix

elif [ "$(expr substr $(uname -s) 1 5)" == "MINGW" ] # MINGW or Git Bash (under Windows)
then
# echo "MINGW"
echo "[detect] Your system has been recognized as WinCore (Windows)"
echo "[step] Adding necessary permissions to the file $WinNTInstallationScript."
echo "[hint] You may need to enter your password."
sudo chmod +x $WinNTInstallationScript
echo "[step] \"2ndVerify for WinCore systems\" installation assistant is ready."
echo "[step] Starting the installation program..."
$WinNTInstallationScript $prefix


else
echo -e "\033[31mYour system cannot be recognized, please contact the developer.\033[0m\n"
echo -e "\033[34mEmail developer at NOTHING567@PixELWine.Com.CN .\033[0m\n"
exit 255

fi
