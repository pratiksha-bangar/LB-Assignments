// write a program which accept string from user and count the number of white space

#include<stdio.h>
#include<ctype.h>

int CountWhite(char *str)
{
    int iCnt=0,iCount=0;

    while(str[iCnt] != 0)
    {
        if(isspace(str[iCnt]))    // isspace 
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
    int iRet =0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    iRet = CountWhite(arr);

    printf("White Spaces are:%d",iRet);

    return 0;
}