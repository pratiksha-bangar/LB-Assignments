// Write a program which acheck whether 15th bit is on or Off.

#include<iostream>
using namespace std;

bool checkBit(int iNo)
{
    int iMask=0x4000;
    int iResult =0;

    iResult = iNo & iMask;

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
    bool bRet = false;

    cout<<"Enter a Number:";
    cin>>iValue;

    bRet = checkBit(iValue);

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