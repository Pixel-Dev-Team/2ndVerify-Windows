@echo off
choice /c CET /m "Press C for Simplified Chinese, E for English and T for Traditional Chinese"
if %errorlevel%==1 goto sc
if %errorlevel%==2 goto en
if %errorlevel%==3 goto tc
:sc
set exename=2ndVerify_CHS.exe
g++ md5.cpp 2ndVerify_CHS.cpp -o 2ndVerify_CHS.exe
goto end
:en
set exename=2ndVerify.exe
g++ md5.cpp 2ndVerify.cpp -o 2ndVerify.exe
goto end
:tc
set exename=2ndVerify_CHT.exe
g++ md5.cpp 2ndVerify_CHT.cpp -o 2ndVerify_CHT.exe
goto end
:end
echo Compile OK! The executable file is %exename%.
pause