// write a program which accept one number from user and check whether 9th or 12th bit is on or Off

#include<iostream>
using namespace std;

bool Check(int iNo)
{
    int iMask=0x900;
    int iResult=0;

    iResult = iNo | iMask;
    
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue=0;
    bool bRet=false;

    cout<<"Enter Number:";
    cin>>iValue;

    bRet = Check(iValue);

    if(bRet == true)
    {
        cout<<"Bit is On";
    }
    else
    {
        cout<<"Bit is Off";
    }

    return 0;
}