// Write a program which acheck whether first and last bit is on or off.first bit means number 1 and last bit means bit number 32

#include<iostream>
using namespace std;

bool checkBit(int iNo)
{
    int iMask=0x80000001;
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