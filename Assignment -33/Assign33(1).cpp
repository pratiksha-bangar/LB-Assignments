// Write a program which accept one number from user and off 7th bit if that number if it is on . return modified number

#include<iostream>
using namespace std;

int BitOff(int iNo)
{
    int iMask=0x40;
    int iResult=0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    iRet = BitOff(iValue);

    cout<<"Modified Value:"<<iRet;

    return 0;

}