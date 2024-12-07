// Accept number of rows and number of columns from user and display below pattern
/*
    A B C D
    A B C D
    A B C D
*/

#include<stdio.h>
void Pattern(int iRow,int iCol)
{
    int i=0,j=0;
    char ch;

    for(i=1;i<=iRow;i++)
    {
        for(j=1;j<=iCol;j++)
        {
            ch = 'A'+ j-1;
            printf("%c\t",ch);
        }
        printf("\n");
    }

}

int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter Number of Rows:");
    scanf("%d",&iValue1);

    printf("Enter Number of Columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}