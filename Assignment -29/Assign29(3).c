// write a program which accept string from user and acccept one characetr. Rrturn index of first occurrence if that character

#include<stdio.h>

int FirstChar(char *str, char ch)
{
    int iCnt=0,iCount=0;

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
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    char arr[30],ch;
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    getchar();

    printf("Enter Character:");
    scanf("%c",&ch);

    iRet =FirstChar(arr,ch);

    if(iRet == -1)
    {
        printf("Character not Found");
    }
    else
    {
        printf("\nFirst occurrence of character is:%d",iRet);
    }

    return 0;

}