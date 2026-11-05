//Write a program which accept number from user and return multiplication of all digits

#include<stdio.h>
#include<stdlib.h>

int MultDigits(int iNo)
{
    int iDigit = 0,iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        if(iDigit > 0)
        {
            iMult = iMult * iDigit;
        }

        iNo = iNo /10;
    }

    return iMult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = MultDigits(iValue);

    printf("Multiplication is : %d\n", iRet);

    return EXIT_SUCCESS;
}