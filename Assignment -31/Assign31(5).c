// Write a program which accept string from user and another string by toggle the case

#include<stdio.h>

void Toggle(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <='z')
        {
            *str = *str - 32;
        }
        else if(*str >= 'A' && *str <='Z')
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

    Toggle(arr);

    printf("Toggle String:%s",arr);

    return 0;
}