// Accept amount in US dollar and return its cirresponding value in indian currency. consider 1$ as 70 Rupees

#include<stdio.h>

int DollarToINR(int iNo)
{
    int iResult=0;

    iResult = iNo * 70;

    return iResult;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number of USD:");
    scanf("%d",&iValue);

    iRet = DollarToINR(iValue);

    printf("value in INR is :%d",iRet);

    return 0;
}