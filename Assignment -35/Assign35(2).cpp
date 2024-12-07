// write a program which accept two number from user and display position of common ON bit from that two numbers

#include<iostream>
using namespace std;

void CommonBit(int iNo1,int iNo2)
{
    int iPos=1;

    int iCommon = iNo1 & iNo2;

    while(iCommon > 0)
    {
        if(iCommon & 1)
        {
            cout<<iPos<<"\n";
        }
        iCommon = iCommon >> 1;

        iPos++;
    }
}

int main()
{
    int iValue1=0,iValue2=0;

    cout<<"Enter First Number:";
    cin>>iValue1;

    cout<<"Enter Second Number:";
    cin>>iValue2;

    CommonBit(iValue1,iValue2);

    return 0;
}