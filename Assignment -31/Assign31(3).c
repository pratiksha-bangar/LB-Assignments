// Write a program which accept string from user and string by converting all small characters into capital case

#include<stdio.h>

void Capital(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    Capital(arr);

    printf("Small to Capital String:%s",arr);

    return 0;
}