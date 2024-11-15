//Accept N numbers from user and accept range, display all elements from that range

#include<stdio.h>
#include<stdlib.h>

void Range(int Arr[], int iSize,int iStart,int iEnd)
{
    int iCnt=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(((Arr[iCnt]) > iStart) && ((Arr[iCnt]) < iEnd))
        {
            printf("\n%d",Arr[iCnt]);
        }
    }
}

int main()
{
    int iLength=0,iCnt=0,iValue1=0,iValue2=0;
    int *p = NULL;

    printf("Enter Elements:");
    scanf("%d",&iLength);

    p = (int *)malloc(iLength * sizeof(int));

    printf("Enter %d Elements:",iLength);
    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&p[iCnt]);
    }

    printf("Enter start Number:");
    scanf("%d",&iValue1);

    printf("Enter End Number:");
    scanf("%d",&iValue2);

    Range(p,iLength,iValue1,iValue2);

    free(p);

    return 0;
}