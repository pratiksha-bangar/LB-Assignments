// write a program which accept number from user and print numbers till that number
// 1 2 3 4 5

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;

    for(iCnt=1;iCnt<=iNo;iCnt++)
    {
        printf("\n%d",iCnt);
    }

}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}