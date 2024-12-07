// write a program which accept string from user reverse that string in place

#include<stdio.h>

void StrRev(char *str)
{
    int iCnt=0,iStart=0,iEnd=0,temp;

    while(str[iEnd] != '\0')
    {
       iEnd++;
    }
    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] =temp;

        iStart++;
        iEnd--;
    }

    printf("Reverse String:%s",str);
}

int main()
{
    char arr[30],ch;
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    StrRev(arr);

    return 0;

}