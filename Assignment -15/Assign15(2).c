// Accept N numbers from user and accept one another number as NO, return index of First oCcurrence of that NO.

#include<stdio.h>
#include<stdlib.h>

int FirstOcc(int Arr[], int iSize,int iNo)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            break;
        }
    }
    return iCnt;
}

int main()
{
    int iLength=0,iCnt=0,iValue=0,iRet =0;
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

    iRet = FirstOcc(p,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First Occurance of Number is :%d",iRet);
    }

    free(p);

    return 0;
}