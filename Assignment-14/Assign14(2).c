// Accept N numbers from user and return difference between frequency of even numbres and odd numbers

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iSize)
{
    int iCnt=0,iEvencount=0,iOddcount=0,iDiff=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) ==0)
        {
            iEvencount++;
        }
        else 
        {
            iOddcount++;
        }
    }
    iDiff = iEvencount - iOddcount;
    return iDiff;
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

    printf("\nDifference between Frequency of Even and odd Numbers:%d",iRet);

    free(p);

    return 0;
}