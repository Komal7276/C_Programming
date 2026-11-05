/*Write a program which accept number from user and return difference between
summation of even digits and summation of odd digits*/

#include<stdio.h>
#include<stdlib.h>

int CountDiff(int iNo)
{
    int iDigit = 0,iEvenSum = 0, iOddSum = 0, iDiff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if((iDigit % 2) == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else if((iDigit % 2) != 0)
        {
            iOddSum = iOddSum + iDigit;
        }

        iNo = iNo / 10;
    }

    iDiff = iEvenSum - iOddSum;

    return iDiff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}