/*
    Write a program which accept distance in kilometre and 
    convert it into meter(1km = 1000meter)
*/

#include<stdio.h>
#include<stdlib.h>

int KMtoMeter(int iNo)
{
    const int KM = 1000;

    return (iNo * KM);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance : \n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("%d KiloMeter is : %d Meter\n", iValue, iRet);

    return EXIT_SUCCESS;
}