// Write a program which accept string from user and copy character of that string into another string in reverse order.

#include<stdio.h>

void strCpyRev(char *str)
{
    int iStart=0,iEnd=0,temp=0;

    while(str[iEnd] != '\0')
    {
        iEnd++;
    }
    iEnd--;

    while(iStart < iEnd)
    {
        temp = str[iStart];
        str[iStart] = str[iEnd];
        str[iEnd] = temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    strCpyRev(arr);

    printf("Reverse String:%s",arr);

    return 0;
}