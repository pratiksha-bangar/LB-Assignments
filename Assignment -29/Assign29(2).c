// write a program which accept string from user and acccept one characetr. return frequency of that character

#include<stdio.h>

int CountChar(char *str, char ch)
{
    int iCnt=0,iCount=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
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
    char ch;
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    getchar();

    printf("Enter Character:");
    scanf("%c",&ch);

    iRet =CountChar(arr,ch);

    printf("\nFrequency of character is:%d",iRet);

    return 0;

}