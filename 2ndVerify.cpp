#include<bits/stdc++.h>
using namespace std;
const int maxWrongTimes = 3;
const string secode = "2NDVERIFY"; //second_code -> seccode -> secode
int wrongTimes;
void reboot(void)
{
    system("COLOR B0");
    printf("Strict Data Protection: Sorry, you have tried too many times, and the system will restart in 3 seconds.\n");
    system("shutdown /r /t 3 /c \"2ndVerify Code Error\"");
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
    printf("The Code you entered is wrong.");

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
        cout<<"Please input your code again..."<<endl;
        string inputCode;
        cin>>inputCode;
        if(isRightCode(inputCode))
        {
            cout<<"Welcome! Your code is RIGHT!"<<endl;
            system("shutdown /a");
            cout<<"Press Any Key to Continue..."<<endl;
            system("pause>nul");
            exit(0);
        }
        else
        {
            codeWrong();
            cout<<"Press any key to Continue..."<<endl;
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
        printf("The system administrator has set Strict Data Protection for this computer.\n");
        printf("Please use the 2ndCode published by the administrator to log in to this computer.\n");
        cout<<"Now please input your code..."<<endl;
        string inputCode;
        cin>>inputCode;
        system("cls");
        cout<<"The system is checking the code you entered..."<<endl;
        if(isRightCode(inputCode))
        {
            cout<<"Welcome! Your code is RIGHT!"<<endl;
            system("shutdown /a");
            cout<<"Press Any Key to Continue..."<<endl;
            system("pause>nul");
            exit(0);
        }
        else
        {
            codeWrong();
            cout<<"Press any key to Continue..."<<endl;
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
    system("shutdown /r /t 20 /c \"2ndVerify Check\"");
    printUI(wrongTimes);
}
