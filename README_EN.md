# 2ndVerify-Windows

[简体中文版本](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README.md)

[繁體中文版本 (By Bing Microsoft Translator)](https://github.com/PixelWine/2ndVerify-Windows/blob/main/README_T.md)

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

