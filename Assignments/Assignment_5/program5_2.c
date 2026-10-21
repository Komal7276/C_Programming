//Check leap year

#include<stdio.h>
#include<stdlib.h>

void CheckLeapYear(int iYear)
{
    if((iYear % 4 ) == 0 ||(iYear % 400) == 0)
    {
        printf("Leap year\n");
    }
    else if(iYear <= 0)
    {
        printf("Invalid\n");
    }
    else
    {
        printf("Not a leap year\n");
    }
}

int main()
{
    int iYear = 0;

    printf("Enter Year : \n");
    scanf("%d", &iYear);

    CheckLeapYear(iYear);

    return EXIT_SUCCESS;
}