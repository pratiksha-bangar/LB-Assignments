// Accept character from user and check whether it is digit or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkDigit(char cValue)
{
    if(cValue >='0' && cValue <= '9')
    {
        return true;
    }
    else
    {
        return false;
    }
}


int main()
{
    char ch;
    bool bRet=false;

    printf("Enter Character:");
    scanf("%c",&ch);

    bRet = ChkDigit(ch);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}