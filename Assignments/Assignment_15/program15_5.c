//Write a program which accept total marks & obtained marks from user and calculate percentage

#include<stdio.h>
#include<stdlib.h>

float Percentage(int iNo1, int iNo2)
{
    float fAns = 0.0f;

    fAns = ((float)iNo2 / iNo1) * 100;

    return fAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    float fRet = 0.0f;

    printf("Please enter total marks :\n");
    scanf("%d", &iValue1);

    printf("Please enter obtained marks :\n");
    scanf("%d", &iValue2);

    fRet = Percentage(iValue1, iValue2);

    printf("%f\n", fRet);

    return EXIT_SUCCESS;
}