//write a program which accept range from user and
//display all even numbers in between that range

#include<stdio.h>
#include<stdlib.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0; 

    if(iStart <= iEnd)
    {
        for(iCnt = iStart; iCnt <= iEnd; iCnt++)
        {
            if((iCnt % 2) == 0)
            {
                printf("%d\t", iCnt);
            }
        }
    }
    else
    {
        printf("Invalid Range\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Ente Starting point : \n");
    scanf("%d", &iValue1);

    printf("Ente Ending point : \n");
    scanf("%d", &iValue2);

    RangeDisplayEven(iValue1, iValue2);

    return EXIT_SUCCESS;
}