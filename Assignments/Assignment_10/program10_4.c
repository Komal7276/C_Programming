/*
    Write a program which accept temperature in Fahrenheit and convert it into celsius
    (1 celsius = (Fahrenheit - 32) * (5/9))
*/

#include<stdio.h>
#include<stdlib.h>

double FhtoCs(float fTemp)
{
    double TempCelsius = 0.0;

    TempCelsius = (fTemp - 32) * 0.555;

    return TempCelsius;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit : \n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%lf\n", dRet);

    return EXIT_SUCCESS;
}