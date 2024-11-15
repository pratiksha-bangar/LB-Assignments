// Accept N numbers from user and accept one another number  as NO, check whether No is present or Not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(int Arr[], int iSize,int iNo)
{
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt]) == iNo)
        {
            break;
        }
    }

    if(iCnt == iSize)
    {
        return false;
    }
    else 
    {
        return true;
    }
}

int main()
{
    int iLength=0,iCnt=0,iValue=0;
    bool bRet=false;
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

    bRet = check(p,iLength,iValue);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else 
    {
        printf("FALSE");
    }

    free(p);

    return 0;
}