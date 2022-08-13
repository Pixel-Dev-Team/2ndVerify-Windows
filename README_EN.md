<!--
# 2ndVerify-Windows

[简体中文版本](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README.md)

<!-- [繁體中文版本 (By Bing Microsoft Translator)](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README_T.md) -->

Welcome to the vast number of contributors for multilingual documents to provide human translation!

**All of the instructions below are for 2ndVerify Version Windows-alpha !!! Do not operate on other OS or other versions of 2ndVerify!!!**

**Solemnly state: At present, developers have not developed Linux, macOS version, all versions except Windows version are not official version, please consider the consequences before use! Please refer to for details[Official version & ported version](#2ndVerify 的官方版本与移植版本)**


## What's the use of 2ndVerify? How does it work?

- 2ndVerify can help you lock your computer twice (three times if you turn on the system disk BitLocker) to keep your data safe
- It manages your computer's switching machine status by executing the ```shutdown``` instructions built into the Windows system, requiring little external library.

## How to use 2ndVerify ？

1. Change 2ndVerify.cpp Line 3, 4 const variables[See this for interpretation](#Note: const variable meaning)
2. Compile 2ndVerify.cpp
3. Add 2ndVerify.exe to the boot entry
4. Enjoy~

### Note: const variable meaning

Line 3: 

```cpp
const int maxWrongTimes
```
Default: 3

Meaning: The maximum number of attempts

Call: There is a call in the ```checkWrongMax()``` function

Importance: Not recommended to increase, can be reduced or not modified

Line 4: 

```cpp
const string secode
```
Default: 2NDVERIFY

Meaning: Reference notes. ```// second_code -> seccode -> secode```

Call: There is a call in the ```isRightCode()``` function

Importance: Recommended modifications

## What if I forget Code?

- Remove the power-on startup item via PE
- and so on.


## What features have been developed or are pending on 2ndVerify?

- [x] Verify that the code entered and the stored Code are consistent

- [x] Limit the maximum number of attempts

- [x] Automatic restart after the maximum number of attempts has been reached

- [x] Prevents data from being protected after being shut down (pre-execution of delayed restart instructions)

- [x] Almost detached from the external library (using only the C-core and system built-in instructions)

- [ ] Store Code encrypted locally and then run 2ndVerify by reading the Code

- [ ] Implementing the GUI

- [ ] Update Code in real time with changes in timestamps

- [ ] When you forget your Code, you can do so by answering preset questions

- [ ] Connect to the Internet to log in to the PixELBlog (https://blog.pixelwine.top) account and remotely manage your computer

- [ ] Connect to a third-party platform

- [ ] Remote login via a third-party platform API

- [ ] Support for biometrics (potential development of special hardware)
(doing!!!)

## The official and ported versions of the 2ndVerify

Paraphrase:

- Official proven version: refers to the 2ndVerify version developed by PixelWine, which has been validated for feasibility by the VirtualBox Windows XP and VirtualBox Windows 7 and Physical Windows 10. Not yet.

- Official version: refers to the 2ndVerify version developed by PixelWine, currently only 2ndVerify Version Windows-alpha.
- Officially validated ported version: Refers to a ported version that has been validated as feasible by the VirtualBox Windows XP and VirtualBox Windows 7 and Physical Windows 10. Not yet.
- Ported version: refers to a 2ndVerify version that is written or emailed by PixelWine and not developed by PixelWine. Not yet.
- Ported version without official permission (also known as the "path version"): refers to a 2ndVerify version that is not developed by PixelWine and is not developed by PixelWine. This item is not counted.

-->
# 2ndVerify-Windows

[繁體中文版本(By Bing Microsoft Translator)](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README_T.md)

[简体中文版本](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README.md)

Contributors are welcome to provide human translations for multilingual documents!

** All instructions below are for 2ndVerify Version win-1.0 !!! Please do not operate on other OS or other versions of 2ndVerify (some operations may be compatible)! ** Please do not operate on other OS or other versions of 2ndVerify (some operations may be compatible)!

**Please do not operate on other OS or other versions of 2ndVerify (some operations may be compatible)! Please refer to the [official version & ported version](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README.md#2ndverify-%E7%9A%84%E5%AE%98%E6%96%B9%E7%89%88% E6%9C%AC%E4%B8%8E%E7%A7%BB%E6%A4%8D%E7%89%88%E6%9C%AC) **


## What does 2ndVerify do? How does it work?

- 2ndVerify locks your computer 2 times (3 times if you have BitLocker on the system disk) to keep your data safe
- It manages your computer's on/off state by executing the Windows built-in ``shutdown`` command, and requires almost no external libraries.

## How to use 2ndVerify?

1. change the const variable in 2ndVerify.cpp, lines 3 and 4 (# Remarks: CONST variable meaning)
2. compile 2ndVerify.cpp to 2ndVerify.exe
3. add 2ndVerify.exe to bootloader
4. Enjoy~

### Note: The meaning of CONST variable

Line 3: 

```cpp
const int maxWrongTimes
```

Default value: 3

Meaning: maximum number of attempts

Call: Called in the ``checkWrongMax() ``` function

Importance: not recommended to increase, can be reduced or not modified

Line 4: 

```cpp
const string secode
```

Default value: DEFAULT_CODE@

Meaning: password

Call: Called in the ```isRightCode() ``` function

Importance: ⭐ Recommended changes

## What should I do if I forget the Code?

- Delete the bootup item via PE or safe mode
- By special means, transfer Save2ndVerify.bat to your computer and boot it up **quickly** and execute the file to remove the 2ndVerify restriction ***at that time*** and so on.
- and so on.


## What are the developed or pending features of 2ndVerify?

- [x] <del>Verify that the entered Code matches the stored Code</del>

- [x] <del>Limit the maximum number of attempts</del>

- [x] <del>Automatically restart after maximum attempts</del>

- [x] <del>Protects data from being shut down (pre-execute delayed restart command)</del>

- [x] <del>Almost disconnects from external libraries (only uses C++ kernel and system built-in instructions)</del>

- [ ] Store Code locally in encrypted form, then read this Code to perform 2ndVerify operations

- [ ] Implement the GUI

- [ ] Update Code in real time with timestamp changes

- [ ] When you forget your Code, you can reset it by answering a preset question

- [ ] Login to the [PixELBlog](https://blog.pixelwine.top) account to manage your computer(s) remotely

- [ ] Connect to a third-party platform

- [ ] Remote login via third-party platform API

- [ ] Biometric support (with the possibility of developing special hardware)

  (Doing...)

## Official and ported versions of 2ndVerify

Definition.

- Verified official version: refers to the 2ndVerify version that has been verified as viable by PixelWine's three machines (VirtualBox Windows XP & VirtualBox Windows 7 & Physical Windows 10) and developed by PixelWine. Not available yet.

- Official Version: Refers to the 2ndVerify version developed by PixelWine, currently only 2ndVerify Version Windows-alpha is available.
- Official Verified Port: A port that has been verified by PixelWine on three machines (VirtualBox Windows XP & VirtualBox Windows 7 & Physical Windows 10). Not available yet.
- Ported version: A 2ndVerify version that is licensed in writing or by email from PixelWine and not developed by PixelWine. Not available at this time.
- Unofficially licensed ports (aka "trail versions"): 2ndVerify versions not licensed in writing or by Email by PixelWine and not developed by PixelWine. This item is not counted.




Translated with www.DeepL.com/Translator (free version)
