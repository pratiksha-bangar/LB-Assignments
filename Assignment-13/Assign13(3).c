// Accept N numbers from user and dispay all such elements which are even and display by 5.


#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iSize)
{
    int iCnt=0;

    printf("\nEven elements and Divisible by 5 :");
    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(((Arr[iCnt] % 2) ==0) && ((Arr[iCnt] % 5) ==0))
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

    Display(p,iLength);

    free(p);

    return 0;
}