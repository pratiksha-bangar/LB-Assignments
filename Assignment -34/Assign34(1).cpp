// Write a program which accept one number from user and position from user and check whether bit at that position is on or off. if bit is on return true otherwise return false

#include<iostream>
using namespace std;

bool CheckBit(int iNO,int iPos)
{
    int iResult=0;
    int iMask=0x1;

    iMask = iMask << (iPos - 1);

    iResult = iNO & iMask;

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
    int iValue=0,iLocation=0;
    bool bRet=false;

    cout<<"Enter Number:";
    cin>>iValue;

    cout<<"Enter Position:";
    cin>>iLocation;

    bRet = CheckBit(iValue,iLocation);

    if(bRet == true)
    {
        cout<<"TRUE";
    }
    else
    {
        cout<<"FALSE";
    }

    return 0;
}