// Write a program which accept one number from user and toggle contents of first and last nibble of that number. return modified number (nibble is a group of four bits)

#include<iostream>
using namespace std;

int ToogleBit(int iNo)
{
    int iResult=0;
    int iMask=0xe000000e;

    iResult = iNo ^ iMask;  

    return iResult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    iRet = ToogleBit(iValue);

    cout<<"Modified value:"<<iRet;

    return 0;
}