// write a program which accept string from user and acccept one characetr. check whether that characetr is present in string or not

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, char ch)
{
    int iCnt=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            break;
        }
        iCnt++;
    }
    
    if(str[iCnt] == '\0')
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    char arr[30],cValue='\0';
    bool bRet=false;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    getchar();

    printf("Enter Character:");
    scanf("%c",&cValue);

    bRet = ChkChar(arr,cValue);

    if(bRet== true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;

}