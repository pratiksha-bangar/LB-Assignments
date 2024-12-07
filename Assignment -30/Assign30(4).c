// Accept character from user and check whether it is small case or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkSmall(char cValue)
{
    if(cValue >='a' && cValue <= 'z')
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

    bRet = ChkSmall(ch);

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