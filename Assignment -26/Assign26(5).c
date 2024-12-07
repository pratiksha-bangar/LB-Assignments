// Accept character from user and display its ASCII value in decimal,octal,hexadecimal fromat

#include<stdio.h>

void Display(char ch)
{
   printf("\nDecimal:%d",ch);
   printf("\nOctal:%o",ch);
   printf("\nHexadecimal:%0x%x",ch);
}

int main()
{
    char cValue='\0';

    printf("Enter Character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}