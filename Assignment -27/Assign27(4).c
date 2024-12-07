// Write a program which accept string from user and check wheteher it contains vowels in it or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    int iCnt=0;

    while(str[iCnt] != '\0')
    {
        if(str[iCnt] == 'a' || str[iCnt] == 'e' || str[iCnt] == 'i' || str[iCnt] == 'o' ||  str[iCnt] == 'u' || str[iCnt] == 'A' || str[iCnt] == 'E' || str[iCnt] == 'I' || str[iCnt] == 'O' || str[iCnt] == 'U'  )
        {
           return true;
        }
        iCnt++;
    }
    return false;

}

int main()
{
    char arr[30];
    bool bRet=false;

    printf("Enter String:");
    scanf("%[^'\n']s",arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }

    return 0;
}