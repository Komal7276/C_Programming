/*
    Write a program which accept area in square feet and convert it into square meter
    (1 square feet = 0.0929 square meter)
*/

#include<stdio.h>
#include<stdlib.h>

double SquareMeter(int iNo)
{
    const float feet = 0.0929;
    double SqMeter = 0.0;

    SqMeter = iNo * feet;

    return SqMeter;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet : \n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%lf\n", dRet);

    return EXIT_SUCCESS;
}