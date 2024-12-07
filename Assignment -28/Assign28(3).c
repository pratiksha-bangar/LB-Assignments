// write a program which accept string from user and toggle the case

#include<stdio.h>

void StrToggle(char *str)
{
    int iCnt=0,iCount=0;

    while(str[iCnt] != 0)
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')  
        {
            str[iCnt] = str[iCnt] - 32;
        }
        else if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt] + 32;
        }
        iCnt++;
    }

    printf("Toggle Case String:%s",str);
}

int main()
{
    char arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    StrToggle(arr);

    return 0;
}