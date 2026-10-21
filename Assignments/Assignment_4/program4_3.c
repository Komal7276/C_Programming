//Find the greater of two numbers

#include<stdio.h>
#include<stdlib.h>

void FindGreater(int iFirst, int iSecond)
{
    if(iFirst < iSecond)
    {
        printf("%d is Greater\n", iSecond);
    }
    else if(iFirst > iSecond)
    {
        printf("%d is Greater\n", iFirst);
    }
    else
    {
        printf("Both numbers are equal\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter two numbers :\n");
    scanf("%d %d", &iValue1, &iValue2);

    FindGreater(iValue1,iValue2);

    return EXIT_SUCCESS;
}