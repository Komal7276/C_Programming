/*
---------------------------------------------
                Operation &&
---------------------------------------------
Result1     Result2     FinalResult
---------------------------------------------
TRUE        TRUE        TRUE
TRUE        FALSE       FALSE
FALSE       TRUE        FALSE       (Short circuit evaluation)
FALSE       FALSE       FALSE       (Short circuit evaluation)
---------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CehckDivisible(int iNo)
{
    if(((iNo % 3) == 0) && ((iNo % 5) == 0))
    {
        printf("%d is Divisible by 3 and 5\n", iNo);
    }
    else
    {
        printf("%d is not Divisible by 3 and 5\n", iNo);
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