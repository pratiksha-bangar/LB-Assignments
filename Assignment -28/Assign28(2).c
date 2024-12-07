// write a program which accept string from user and convert it into Upper case

#include<stdio.h>

void StrUpper(char *str)
{
    int iCnt=0;

    while(str[iCnt] != 0)
    {
        if(str[iCnt] >= 'a' && str[iCnt] <= 'z')
        {
            str[iCnt] = str[iCnt] - 32;
        }
        iCnt++;
    }

    printf("UpperCase String:%s",str);
}

int main()
{
    char arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    StrUpper(arr);

    return 0;
}