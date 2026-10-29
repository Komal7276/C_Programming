/*
---------------------------------------------
                Operation ||
---------------------------------------------
Result1     Result2     FinalResult
---------------------------------------------
TRUE        TRUE        TRUE    (short circuit evaluation)
TRUE        FALSE       TRUE    (short circuit evaluation)
FALSE       TRUE        TRUE        
FALSE       FALSE       False       
---------------------------------------------
*/

#include<stdio.h>
#include<stdlib.h>

void CehckDivisible(int iNo)
{
    if(((iNo % 3) == 0) || ((iNo % 5) == 0))
    {
        printf("It is Divisible\n");
    }
    else
    {
        printf("It is not Divisible\n");
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