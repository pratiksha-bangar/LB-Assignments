// write a program which accept one number from user and count number of ON bits in it without using % and / operator

#include<iostream>
using namespace std;

int CountOnBit(int iNo)
{
    int iCount=0;

    while(iNo > 0)
    {
        if(iNo & 1)
        {
            iCount++;
        }
        iNo = iNo >> 1;
    }    
    return iCount;
}

int main()
{
    int iValue=0,iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    iRet = CountOnBit(iValue);

    cout<<"On Bits are:"<<iRet;

    return 0;
}