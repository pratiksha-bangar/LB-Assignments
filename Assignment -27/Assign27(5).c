// Write a program which accept string from user and display in it reverse order

#include<stdio.h>

void Reverse(char *str)
{
    int iStart=0,iEnd=0;
    char temp;

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

    printf("Reverse string:%s",str);
}

int main()
{
    char arr[30];

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}