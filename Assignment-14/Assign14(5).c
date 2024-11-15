// Accept N numbers from user and accept one another number as No, return frequency of No from it

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iSize,int iNo)
{
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength=0,iValue=0,iCnt=0,iRet=0;
    int *p = NULL;

    printf("Enter Elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements:",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter Number:");
    scanf("%d",&iValue);

    iRet = Frequency(p,iLength,iValue);

    printf("\nFrequency of 11:%d",iRet);

    free(p);

    return 0;
}