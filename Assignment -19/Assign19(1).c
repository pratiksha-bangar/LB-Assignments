// Accept number from user and display below pattern
// A B C D E

#include<stdio.h>

void pattern(int iNo)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iNo;iCnt++)
    {
        printf("%c\t",'A'+iCnt);
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