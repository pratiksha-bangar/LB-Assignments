// Write a program which accept one number from user and on its first 4 bit . return modified number

#include<iostream>
using namespace std;

int OnBit(int iNo)
{
    int iMask=0xf;
    int iResult=0;

    iResult = iNo | iMask;

    return iResult;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    iRet = OnBit(iValue);

    cout<<"Modified Value:"<<iRet;

    return 0;

}