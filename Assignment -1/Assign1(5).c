// Accept one number from user and print that number of * on Screen

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt =0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*");
    }
}
int main()
{
    int iValue=0;
    
    printf("Enter a number:");
    scanf("%d",&iValue);

    Accept(iValue);
    return 0;
}