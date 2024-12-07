// Accept character from user and check whether it is special symbol or not(!,@,#,$,%,^,&,*).

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    if(ch == '!' || ch == '@' || ch =='#' || ch =='$' || ch =='%' || ch =='^' || ch =='&' || ch =='*')
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
    char cValue='\0';
    bool bRet=false;

    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet = ChkSpecial(cValue);

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