/*
 * @Author: Eric Liu
 * @Date: 2021-09-12 17:46:20
 * @LastEditors: PixelWine
 * @LastEditTime: 2021-10-06 22:30:54
 * @FilePath: \workspace\CleanSpace_NOProtected\CPP-2ndVerify\2ndVerify_CHS.cpp
 * @Encode: UTF-8
 * (c)2021 Eric Liu(aka PixelWine, PWEL or Fagri). All rights reserved.
 * @LICENSE: GNU General Public License 3.0
 * @description: v1.0
 */
#include<bits/stdc++.h>
#define __2NDVERIFY_version__ 1.0
using namespace std;
const int maxWrongTimes = 3;
const string secode = "DEFAULT_CODE@"; // second_code -> seccode -> secode
int wrongTimes;
void reboot(void)
{
    system("COLOR B0");
    printf("严格数据保护SDP: 对不起, 您尝试的次数过多, 系统已启动SDP，将会在3秒内重新启动.\n");
    system("shutdown /r /t 3 /c \"2ndVerify 错误\"");
    return;
}
bool isRightCode(string code)
{
    if(secode==code)
    {
        return true;
    }
    return false;
}
void codeWrong(void)
{
    system("COLOR 4F");
    printf("您输入的代码不正确");

}
bool checkWrongMax(void)
{
    if(wrongTimes>=maxWrongTimes)
        return true;
    return false;
}
void printUI(int wrongs)
{
    if(wrongs>0)
    {
        system("COLOR 9F");
        cout<<"请您再次输入二次验证代码"<<endl;
        string inputCode;
        cin>>inputCode;
        if(isRightCode(inputCode))
        {
            cout<<"欢迎! 您的代码是正确的！"<<endl;
            system("shutdown /a");
            cout<<"按回车键进入系统"<<endl;
            system("pause>nul");
            exit(0);
        }
        else
        {
            codeWrong();
            cout<<"按回车键继续"<<endl;
            system("pause>nul");
            wrongTimes++;
            if(checkWrongMax())
            {
                reboot();
            }
            else printUI(wrongTimes);
        }
    }
    else
    {
        system("COLOR 9F");
        printf("系统管理员已经为这台电脑设置严格数据保护。\n");
        printf("请使用管理员给予的二次验证代码登录这台计算机。.\n");
        cout<<"现在请输入你的代码:"<<endl;
        string inputCode;
        cin>>inputCode;
        system("cls");
        cout<<"系统正在检查您输入的代码…"<<endl;
        if(isRightCode(inputCode))
        {
            cout<<"欢迎! 您的代码是正确的!"<<endl;
            system("shutdown /a");
            cout<<"按回车键继续…"<<endl;
            system("pause>nul");
            exit(0);
        }
        else
        {
            codeWrong();
            cout<<"按任意键继续…"<<endl;
            system("pause>nul");
            wrongTimes++;
            if(checkWrongMax())
            {
                reboot();
            }
            else printUI(wrongTimes);
        }
    }
}
int main()
{
    system("chcp 65001");
    system("shutdown /r /t 20 /c \"2ndVerify Check\"");
    printUI(wrongTimes);
}
