#include<stdio.h>
#include<stdlib.h>

float AverageDigits(int iNo)
{
    int iDigit = 0;
    int iSum = 0;
    int iCount = 0;
    float Avg = 0.0f;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iSum = iSum + iDigit;
        iCount++;

        iNo = iNo / 10;
    }

    Avg = iSum / iCount;

    return Avg;
}

int main()
{
    int iValue = 0;
    float fRet = 0.0f;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    fRet = AverageDigits(iValue);

    printf("Average of Digits : %f\n", fRet);

    return EXIT_SUCCESS;
}