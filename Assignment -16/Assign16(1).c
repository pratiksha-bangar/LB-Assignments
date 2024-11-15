// Accept N Numbers from user and return the largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[], int iSize)
{
    int iCnt=0,imax=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] > imax)
        {
           imax = Arr[iCnt];
        }
    }
    return imax;
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

    iRet= Maximum(p,iLength);

    printf("Maximum Numbers:%d",iRet);

    free(p);

    return 0;
}