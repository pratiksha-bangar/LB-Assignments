// write a program which accept one number from user and range of position from user . toggle all bit from user that range

#include<iostream>
using namespace std;

int ToggleBitRange(int iNo,int iPos1,int iPos2)
{    
    int iMask = 0;

    for(int i=iPos1; iPos1<=iPos2; i++)
    {
         iMask |= (1 << (i - 1));
    }

    iNo = iNo ^ iMask;

    return iNo;
}

int main()
{
    int iValue=0,iLocation1=0,iLocation2=0;
    int iRet=0;

    cout<<"Enter Number:";
    cin>>iValue;

    cout<<"Enter First Location:";
    cin>>iLocation1;

    cout<<"Enter Second Location:";
    cin>>iLocation2;

    iRet = ToggleBitRange(iValue,iLocation1,iLocation2);

    cout<<"Data after Toggle:"<<iRet;

    return 0;
}