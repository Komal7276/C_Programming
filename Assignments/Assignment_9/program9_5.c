//Write a program which returns difference between Even Factorial and odd factorial of given number

#include<stdio.h>
#include<stdlib.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, evenFact = 1, oddFact = 1, diff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            evenFact = evenFact * iCnt;
        }
        else if((iCnt % 2) != 0)
        {
            oddFact = oddFact * iCnt;
        }
    }

    diff = evenFact - oddFact;

    return diff;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d \n", iRet);

    return EXIT_SUCCESS;
}