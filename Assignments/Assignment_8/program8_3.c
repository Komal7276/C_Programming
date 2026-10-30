//Write a program to find factorial of given number

#include<stdio.h>
#include<stdlib.h>

int Factorial(int iNo)
{
    int iCnt = 0, fact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo ; iCnt >= 1; iCnt--)
    {
        fact = fact * iCnt;   
    }

    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d is : %d\n", iValue, iRet);

    return EXIT_SUCCESS;
}