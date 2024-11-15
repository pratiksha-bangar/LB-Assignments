// write a program which return differenec between even and odd factorial of given number

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt=0,iEvenFact=1,iOddFact=1,iDiff=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    printf("\nEven Factorial:%d",iEvenFact);
    printf("\nOdd Factorial:%d",iOddFact);

    iDiff = iEvenFact - iOddFact;
    return iDiff;
}

int main()
{
    int iValue=0,iRet=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("\nEven odd Factorial Difference :%d",iRet);

    return 0;
}