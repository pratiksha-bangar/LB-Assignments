// write a program which display ASCII table. Table contains symbol,decimal,hexadecimal and octal representation of every member from 0 to 255

#include<stdio.h>

void DisplayASCII()
{
    int iCnt=0;
    char ch='\0';

    printf("ASCII Table:");

    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%c\n",iCnt);
    }
}

int main()
{
    DisplayASCII();

    return 0;
}