// Write a program which accept one number from user and toggle 7th and 10th bit if that number if it is on . retuen modified number

#include<iostream>
using namespace std;

int ToggleBit(int iNo)
{
    int iMask=0x240;
    int iResult=0;

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    iRet = ToggleBit(iValue);

    cout<<"Modified Value:"<<iRet;

    return 0;

}