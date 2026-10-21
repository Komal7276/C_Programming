//Calculate employee bonus

#include<stdio.h>
#include<stdlib.h>

void CalculateBonus(float fSalary, int iYears)
{
    float fBonus = 0.0f;
    
    if((fSalary > 0) && (iYears > 10))
    {
        fBonus = fSalary * 15 / 100;

        printf("Bonus : %f\n", fBonus);
    }
    else if((fSalary > 0) && (iYears >= 5)&& (iYears <= 10))
    {
        fBonus = fSalary * 10 / 100;

        printf("Bonus : %f\n", fBonus);  
    }
    else if((fSalary > 0) && (iYears >= 0) && (iYears < 5))
    {
        fBonus = fSalary * 5 / 100;

        printf("Bonus : %f\n", fBonus);  
    }
    else
    {
        printf("Invalid\n");
    }

}

int main()
{
    float fSalary = 0.0f;
    int iYears = 0;

    printf("Enter salary and years of services :\n");
    scanf("%f %d", &fSalary, &iYears);

    CalculateBonus(fSalary, iYears);

    return EXIT_SUCCESS;
}