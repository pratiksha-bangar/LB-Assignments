// write a program which accept number from user and print first 5 multiples of N

#include<stdio.h>

void OddDisplay(int iNo)
{
    int iCnt=0,iMulti=0;

    for(iCnt=1;iCnt<=5;iCnt++)
    {
        iMulti = iNo * iCnt;
        printf("\n%d",iMulti);
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    OddDisplay(iValue);

    return 0;
}