//Calculate shopping discount

#include<stdio.h>
#include<stdlib.h>

void  CalculateDiscount(float fAmount)
{
    float fDiscount = 0.0f;
    float fFinalAmount = 0.0f;

    if((fAmount > 0) && (fAmount < 1000))
    {
        printf("Payable Amount = %f\n", fAmount);
    }
    else if((fAmount >= 1000) && (fAmount < 5000))
    {
        fDiscount = fAmount * 10 / 100;

        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount : %f\n", fFinalAmount);
    }
    else if(fAmount >= 5000)
    {
        fDiscount = fAmount * 20 / 100;

        fFinalAmount = fAmount - fDiscount;

        printf("Payable Amount : %f\n", fFinalAmount);
    }
    else
    {
        printf("Invalid\n");
    }
}

int main()
{
    float fAmount = 0.0f;

    printf("Enter purchase amount :\n");
    scanf("%f", &fAmount);

    CalculateDiscount(fAmount);

    return EXIT_SUCCESS;
}