/*
    Write a program which accept radius of circle from user and 
    calculate its area . consider value of PI as 3.14
*/

#include<stdio.h>
#include<stdlib.h>

double CircleArea(float fRadius)
{
    const double PI = 3.14;
    double area = 0.0;

    area = PI * fRadius * fRadius;

    return area;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter radius : \n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is : %lf\n", dRet);

    return EXIT_SUCCESS;
}