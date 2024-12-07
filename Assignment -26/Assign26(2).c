// Accept character from user. if character is small dsiplay its corresponding capital character, and if it small then display its corresponding capital. in other case display as it is.

#include<stdio.h>

void DisplayASCII(char ch)
{
    int iCnt=0;

    if(ch >= 'a' && ch <= 'z')
    {
        printf("Converted into Upper Case:%c\n",ch-32);
    }  
    else if(ch >= 'A' && ch <= 'Z')
    {
        printf("Converted into Lower Case:%c\n",ch+32);
    }
    else
    {
        printf("%c\n",ch);
    }
}

int main()
{
    char cValue='\0';

    printf("Enter Character:");
    scanf("%c",&cValue);

    DisplayASCII(cValue);

    return 0;
}