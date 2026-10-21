//Calculate electricity bill

#include<stdio.h>
#include<stdlib.h>

void CalculateElectricityBill(int iUnits)
{
    float fBill = 0.0f;

    if((iUnits > 0) && (iUnits <= 100))
    {
        fBill = iUnits * 5;

        printf("Bill = %f\n", fBill);
    }
    else if(iUnits <= 200)
    {
        fBill = iUnits * 7;

        printf("Bill = %f\n", fBill);
    }
    else
    {
        fBill = iUnits * 10;

        printf("Bill = %f\n", fBill);
    }
}

int main()
{
    int iUnits = 0;

    printf("Enter consumed units :\n");
    scanf("%d", &iUnits);

    CalculateElectricityBill(iUnits);

    return EXIT_SUCCESS;
}