// Accept number from user and display below pattern
// 5 # 4 # 3 # 2 # 1 #

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=iNo; iCnt >=1; iCnt--)
    {
        printf("%d\t #\t",iCnt);
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