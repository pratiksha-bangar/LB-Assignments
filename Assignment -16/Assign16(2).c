// Accept N Numbers from user and return the Smallest number

#include<stdio.h>
#include<stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int iCnt=0,imin=0;
    imin= Arr[0];

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt] < imin)
        {
           imin = Arr[iCnt];
        }
    }
    return imin;
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

    iRet= Minimum(p,iLength);

    printf("Minimum Numbers:%d",iRet);

    free(p);

    return 0;
}