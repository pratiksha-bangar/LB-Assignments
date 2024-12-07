// write a program which accept string from user and acccept one characetr. Rrturn index of last occurrence if that character

#include<stdio.h>

int LastChar(char *str, char ch)
{
    int iCnt=0,iLast=-1;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == ch)
        {
            iLast = iCnt;
        }
        iCnt++;
    }

    return iLast;
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

    iRet =LastChar(arr,ch);

    printf("\nLast occurrence of character is:%d",iRet);


    return 0;

}