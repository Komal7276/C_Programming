/*
    Write a program which accept range from user and return addition of 
    all numbers in between that range(range should contains positive no only).
*/

#include<stdio.h>
#include<stdlib.h>

int RangeSum(int iStart, int iEnd)
{
    int iCnt = 0, iSum = 0;

    if(iStart < 0 || iEnd < 0 || iStart > iEnd)
    {
        return -1;
    }
    else
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point : \n");
    scanf("%d", &iValue1);

    printf("Enter ending point : \n");
    scanf("%d", &iValue2);

    iRet = RangeSum(iValue1, iValue2);

    if(iRet == -1)
    {
        printf("Invalid Range\n");
    }
    else
    {
         printf("Addition is : %d\n", iRet);
    }

    return EXIT_SUCCESS;
}