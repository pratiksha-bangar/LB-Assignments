// write a program to find odd factorial of given number

#include<stdio.h>

int OddFactorial(int iNo)
{
    int iCnt=0,iFact=1;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 1)
        {
            iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = OddFactorial(iValue);

    printf("Odd Factorial :%d",iRet);

    return 0;
}