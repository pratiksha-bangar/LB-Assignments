// write  aprogram which accept one number , two position from user and check whether bit at first or bit at second position is ON or Off

#include<iostream>
using namespace std;

bool CheckBit(int iNo,int iPos1,int iPos2)
{    
    int iResult1=0,iResult2=0;

    int iMask1 = 1 << (iPos1 -1);
    int iMask2 = 1 << (iPos2 - 1);

    iResult1 = iNo & iMask1;
    iResult2 = iNo & iMask2;

    if((iResult1 != 0) || (iResult2 != 0))
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
    int iValue=0,iLocation1=0,iLocation2=0;
    bool bRet=false;

    cout<<"Enter Number:";
    cin>>iValue;

    cout<<"Enter First Location";
    cin>>iLocation1;

    cout<<"Enter Second Location";
    cin>>iLocation2;

    bRet = CheckBit(iValue,iLocation1,iLocation2);

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