// Accept character from user and check whether it is alphabet or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkAlpha(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z' || cValue >='A' && cValue <= 'Z')
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

    bRet = ChkAlpha(ch);

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