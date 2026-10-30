//Write a program to find even factorial of given number

#include<stdio.h>
#include<stdlib.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            fact = fact * iCnt;
        }
    }

    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial pf number is %d\n", iRet);

    return EXIT_SUCCESS;
}