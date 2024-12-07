// Write a program which accept string from user and copy character of that string into another string by removing white spaces

#include<stdio.h>

void strCpyX(char *str, char *brr)
{
    int i=0,j=0;

    while(str[i ] != '\0')
    {
        if(str[i] != ' ')
        {
            brr[j] = str[i];
            j++;
        }
        i++;
    }

    brr[j] = '\0';
}

int main()
{
    char arr[30];
    char brr[30];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    strCpyX(arr,brr);

    printf("\nString without whitespaces:%s",brr);

    return 0;
}