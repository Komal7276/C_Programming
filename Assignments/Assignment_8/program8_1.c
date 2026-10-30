//less than 50      --> small
//50 to 100         --> Medium
//greater than 100  --> Large

#include<stdio.h>
#include<stdlib.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small\n");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium\n");
    }
    else 
    {
        printf("Large\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter numebr : \n");
    scanf("%d", &iValue);

    Number(iValue);

    return EXIT_SUCCESS;
}