// Write a program which accept one number from user and toggle 7th bit if that number if it is on . retuen modified number

#include<iostream>
using namespace std;

int ToggleBit(int iNo,int iPos)
{
    int iMask=0x1;
    int iResult=0;

    iMask = iMask << (iPos -1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue=0,iLocation=0,iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    cout<<"Enter Position:";
    cin>>iLocation;

    iRet = ToggleBit(iValue,iLocation);

    cout<<"Modified Value:"<<iRet;

    return 0;

}