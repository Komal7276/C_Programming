/*Write a program which accept one number from user and 
print that number of even numbers on screen*/

#include<stdio.h>
#include<stdlib.h>

void PrintEven(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }

    int iCnt = 0, iCount = 0;
    iCnt = 1;

    while(iCount<iNo)
    {
        if((iCnt % 2 ) == 0)
        {
            printf("%d\n",iCnt);
            iCount++;
        }
        iCnt++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    PrintEven(iValue);

    return EXIT_SUCCESS;
}