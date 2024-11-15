// Accept N numbers from user and return product of all odd elements

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iSize)
{
    int iCnt=0,iAns=1;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 1)
        {
            iAns = iAns * Arr[iCnt];
        }
    }
    return iAns;
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

    iRet= Product(p,iLength);

    printf("Product of odd Numbers:%d",iRet);

    free(p);

    return 0;
}