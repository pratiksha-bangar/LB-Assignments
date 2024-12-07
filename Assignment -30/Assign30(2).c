// Accept character from user and check whether it is capital or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkCapital(char cValue)
{
    if(cValue >='A' && cValue <= 'Z')
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

    bRet = ChkCapital(ch);

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