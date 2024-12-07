// Write a program which accept string from user and count number of small character

#include<stdio.h>

int CountSmall(char *str)
{
    int iCnt=0,iCount=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'a' && str[iCnt] <='z')
        {
            iCount++;
        }
        iCnt++;
    }
    return iCount;
}

int main()
{
    char arr[30];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = CountSmall(arr);

    printf("Small Characters:%d",iRet);

    return 0;
}