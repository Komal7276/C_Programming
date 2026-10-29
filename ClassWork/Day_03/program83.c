#include<stdio.h>
#include<stdlib.h>

void CehckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        printf("%d is Divisible by 3\n", iNo);
    }
    else
    {
        printf("%d is not Divisible by 3\n", iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter Number :\n");
    scanf("%d", &iValue);

    CehckDivisible(iValue);

    return EXIT_SUCCESS;
}