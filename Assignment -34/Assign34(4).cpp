// Write a program which accept one number and position from user and toggle that bit. return modified number
#include<iostream>
using namespace std;

int toggleBit(int iNo,int iPos)
{
    int iResult=0;
    int iMask=0x1;

    iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;  

    return iResult;
}

int main()
{
    int iValue=0,iLocation=0;
    int iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    cout<<"Enter Position:";
    cin>>iLocation;

    iRet = toggleBit(iValue,iLocation);

    cout<<"Modified value:"<<iRet;

    return 0;
}