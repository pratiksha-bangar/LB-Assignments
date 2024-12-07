// write a program which accept string from user and convert it into lower case

#include<stdio.h>

void StrLower(char *str)
{
    int iCnt=0;

    while(str[iCnt] != 0)
    {
        if(str[iCnt] >= 'A' && str[iCnt] <= 'Z')
        {
            str[iCnt] = str[iCnt]+ 32;
        }
        iCnt++;
    }

    printf("Lowercase String:%s",str);
}

int main()
{
    char arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    StrLower(arr);

    return 0;
}