/*Accept division of student from user and depends on the division display exam timing
There are 4 division in school A,B,C,D .
Exam of division A at 7 am, B at 8.30 am, C at 9.20 am and D at 10.30 am
*/

#include<stdio.h>

void ChkCapital(char cValue)
{
    if(cValue == 'A' || cValue == 'a')
    {
        printf("Your Exam at 7 am") ;
    }
    else if(cValue == 'B' || cValue == 'b')
    {
        printf("Your Exam at 8.30 am") ;
    }
    else if(cValue == 'C' || cValue == 'c')
    {
        printf("Your Exam at 9.20 am") ;
    }
    else if(cValue == 'D' || cValue == 'd')
    {
        printf("Your Exam at 10.30 am") ;
    }
    else
    {
        printf("Today is not Your Exam");
    }
}

int main()
{
    char ch;

    printf("Enter Your Division:");
    scanf("%c",&ch);

    ChkCapital(ch);

    return 0;
}