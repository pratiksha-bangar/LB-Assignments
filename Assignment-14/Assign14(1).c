// Accept N numbers from user and return frequency of even numbers


#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt=0,iEvencount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) ==0)
        {
            iEvencount++;
        }
    }
    return iEvencount;
}

int main()
{
    int iLength=0,iCnt=0,iRet=0;
    int *p = NULL;

    printf("Enter Elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements:",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet = CountEven(p,iLength);

    printf("\nFrequency of Even Numbers:%d",iRet);

    free(p);

    return 0;
}