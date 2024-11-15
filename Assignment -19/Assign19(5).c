// Accept number from user and display below pattern
// 8 = 2 4 6 8 10 12 14 16

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=1; iCnt <=iNo; iCnt++)
    {
        printf("%d\t",2 * iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter Number:");
    scanf("%d",&iValue);

    pattern(iValue);

    return 0;
}