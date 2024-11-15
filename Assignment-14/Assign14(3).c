// Accept N numbers from user and check whether that numbers contains 11 in it or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool check(int Arr[], int iSize)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if((Arr[iCnt] )  == 11)
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
    int iLength=0,iCnt=0;
    int *p = NULL;
    bool bRet =false;

    printf("Enter Elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements:",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    bRet= check(p,iLength);

    if(bRet == true)
    {
        printf("11 is Present");
    }
    else
    {
        printf("11 is Not Present");
    }
    
    free(p);

    return 0;
}