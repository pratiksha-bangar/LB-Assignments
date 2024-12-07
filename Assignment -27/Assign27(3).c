// Write a program which accept string from user and return difference between frequency of small characer and frequency of capital character

#include<stdio.h>

int Difference(char *str)
{
    int iCnt=0,iCCount=0,iSCount=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] >= 'A' && str[iCnt] <='Z')
        {
            iCCount++;
        }
        else
        {
            iSCount++;
        }
        iCnt++;
    }

    return iSCount - iCCount;
}

int main()
{
    char arr[30];
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = Difference(arr);

    printf("Frequency:%d",iRet);

    return 0;
}