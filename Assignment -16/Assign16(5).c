// Accept N Numbers from user and display summation of digit of each numbers

#include<stdio.h>
#include<stdlib.h>

void Digitsum(int Arr[], int iSize)
{
    int iCnt=0,iSum=0,iNo=0,iDigit=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        iSum=0;
        while(Arr[iCnt] > 0)
        {
            iDigit = Arr[iCnt]% 10;
            iSum = iSum + iDigit;
            Arr[iCnt] = Arr[iCnt] / 10;
        }
        printf("\n%d",iSum);
    }
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

    Digitsum(p,iLength);

    free(p);

    return 0;
}