// Accept n number from user and return difference between summation of even elements and summation of odd elements.


#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt=0,iSumeven=0,iSumodd=0,iDiff=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(iCnt %2 ==0)
        {
            iSumeven = iSumeven+Arr[iCnt];
        }
        else 
        {
            iSumodd = iSumodd + Arr[iCnt];
        }
    }

    printf("\nSummation of Even Numbers:%d",iSumeven);
    printf("\nSummation of Odd Numbers:%d",iSumodd);

    iDiff = iSumeven - iSumodd;
    return iDiff;
}

int main()
{
    int iLength=0, iRet=0,iCnt=0;
    int *p = NULL;

    printf("Enter Number of Elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    if(p == NULL)
    {
        printf("Update to allocate memoer");
        return -1;
    }

    printf("Enter %d Elements :",iLength);

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    iRet= Difference(p,iLength);

    printf("Difference are :%d",iRet);

    free(p);

    return 0;

}