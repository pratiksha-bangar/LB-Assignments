// write a program which accept string from user and display only digit from that string

#include<stdio.h>

void DisplayDigit(char *str)
{
    int iCnt=0,iCount=0;

    while(str[iCnt] != 0)
    {
        if(str[iCnt] >= '0' && str[iCnt] <= '9')  
        {
            printf("%c",str[iCnt]);
        }
        iCnt++;
    }
}

int main()
{
    char arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    DisplayDigit(arr);

    return 0;
}