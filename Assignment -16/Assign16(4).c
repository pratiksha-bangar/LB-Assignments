// Accept N numbers from user and display all such numbers which contains 3 digits in it.

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iSize)
{
    int iCnt=0;

    printf("3 Digit Numbers:");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(((Arr[iCnt] ) >= 100 ) && ((Arr[iCnt] ) <= 999))
        {
            printf("\n%d",Arr[iCnt]);
        }
    }
}
int main()
{
    int iLength=0,iCnt=0;
    int *p = NULL;

    printf("Enter Elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements:",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    Digits(p,iLength);

    free(p);

    return 0;
}