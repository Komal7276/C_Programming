#include<stdio.h>
#include<stdlib.h>

void CehckDivisible(int iNo)
{
    if((iNo % 3) == 0)
    {
        if((iNo % 5) == 0)
        {
            printf("It is Divisible by 3 and 5\n");
        }
        else
        {
            printf("It is divisible by 3\n");
        }
    }   
    else
    {
        printf("It is not Divisible by 3 and 5\n");
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