/*
 * @Author: Eric Liu
 * @Date: 2021-09-12 17:46:26
 * @LastEditors: PixelWine
 * @LastEditTime: 2021-10-06 22:24:48
 * @FilePath: \workspace\CleanSpace_NOProtected\CPP-2ndVerify\2ndVerify_CHT.cpp
 * @Encode: UTF-8
 * (c)2021 Eric Liu(aka PixelWine, PWEL or Fagri). All rights reserved.
 * @LICENSE: GNU General Public License 3.0
 * @description: no description
 */
#include <bits/stdc++.h>
using namespace std;
const int maxWrongTimes = 3;
const string secode = "DEFAULT_CODE@"; // second_code -> seccode -> secode
int wrongTimes;
void reboot(void)
{
    system("COLOR B0");
    printf("SDP: 抱歉，您嘗試次數過多，系統將在三秒内重新啓動。\n");
    system("shutdown /r /t 3 /c \"2ndVerify 驗證失敗\"");
    return;
}
bool isRightCode(string code)
{
    if (secode == code)
    {
        return true;
    }
    return false;
}
void codeWrong(void)
{
    system("COLOR 4F");
    printf("您輸入的代碼不正確。");
}
bool checkWrongMax(void)
{
    if (wrongTimes >= maxWrongTimes)
        return true;
    return false;
}
void printUI(int wrongs)
{
    if (wrongs > 0)
    {
        system("COLOR 9F");
        cout << "請輸入 2ndVerify 代碼。" << endl;
        string inputCode;
        cin >> inputCode;
        if (isRightCode(inputCode))
        {
            cout << "歡迎您！您的代碼是正確的！" << endl;
            system("shutdown /a");
            cout << "按下 Enter 鍵退出。" << endl;
            system("pause >nul");
            exit(0);
        }
        else
        {
            codeWrong();
            cout << "按下 Enter 鍵繼續。" << endl;
            system("pause>nul");
            wrongTimes++;
            if (checkWrongMax())
            {
                reboot();
            }
            else
                printUI(wrongTimes);
        }
    }
    else
    {
        system("COLOR 9F");
        printf("管理員已爲這臺計算機開啓了高級數據保護 SDP 功能。\n");
        printf("請使用管理員發佈的 2ndVerify 代碼登錄到這臺計算機。\n");
        cout << "請輸入 2ndVerify 代碼。" << endl;
        string inputCode;
        cin >> inputCode;
        system("cls");
        cout << "系統正在運行中..." << endl;
        if (isRightCode(inputCode))
        {
            cout << "歡迎您！您的代碼是正確的！" << endl;
            system("shutdown /a");
            cout << "按下 Enter 鍵退出。" << endl;
            system("pause >nul");
            exit(0);
        }
        else
        {
            codeWrong();
            cout << "按下 Enter 鍵繼續。" << endl;
            system("pause>nul");
            wrongTimes++;
            if (checkWrongMax())
            {
                reboot();
            }
            else
                printUI(wrongTimes);
        }
    }
}
int main()
{
    system("chcp 65001");
    system("title 内建數據保護程式: 2ndVerify -- Omita 版本");
    system("shutdown /r /t 20 /c \"2ndVerify 驗證失敗\"");
    printUI(wrongTimes);
}
