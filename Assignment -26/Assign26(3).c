//Accept character from user. if it is capital then display all the character from user the input characters till z. if input character is small then print all the character in reverse order tii a. in other case return directly.

#include<stdio.h>

void Display(char ch)
{
    int iCnt=0;

    for(iCnt=0;iCnt<='z';iCnt++)
    {
        if(ch >= 'a' && ch <= 'z')
        {
            printf("%c\n",ch);
            ch--;
        }

        if(ch >= 'A' && ch <= 'Z')
        {
            printf("%c\n",ch);
            ch++;
        }
    } 
}

int main()
{
    char cValue='\0';

    printf("Enter Character:");
    scanf("%c",&cValue);

    Display(cValue);

    return 0;
}