// Accept N Numbers from user and return the differenec between largest number ans smallest number

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iSize)
{
    int iCnt=0,imax=0,imin=0,iDiff=0;
    imin = Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] > imax)
        {
           imax = Arr[iCnt];
        }
        else if(Arr[iCnt] < imin)
        {
            imin = Arr[iCnt];
        }
    }
  
    iDiff = imax - imin;
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

    iRet= Difference(p,iLength);

    printf("Difference between Maximum Numbers and minimum number:%d",iRet);

    free(p);

    return 0;
}