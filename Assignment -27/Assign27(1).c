// Write a program which accept string from user and count number of capital character

#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt=0,iCount=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <='Z')
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

    iRet = CountCapital(arr);

    printf("Capital Characters:%d",iRet);

    return 0;
}