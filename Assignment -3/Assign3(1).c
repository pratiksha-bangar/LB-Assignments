// write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void printEven(int iNo)
{
    if(iNo <=0)
    {
        return;
    }

    int iCnt =0;
    iCnt=1;

    if((iCnt<=iNo)%2==0 )
    {
        printf("\t %d",iCnt);
    }
}
int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    printEven(iValue);
    
    return 0;
}