// Accept number from user and check whether number is even or odd

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo%2 ==0)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
int main()
{
    int iValue =0;
    BOOL bRet = FALSE;

    printf("Enter a Number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    
    if(TRUE)
    {
        printf("Number is Even");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;
}