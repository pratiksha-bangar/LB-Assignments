// Write a program which accept string from user and  another string by converting all cpital chracters into small case

#include<stdio.h>

void Small(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <='Z')
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char arr[30];

    printf("Enter string:");
    scanf("%[^'\n']s",arr);

    Small(arr);

    printf("Capital to Small String:%s",arr);

    return 0;
}