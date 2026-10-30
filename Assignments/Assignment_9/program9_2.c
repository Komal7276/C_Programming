/*Accept amount in Us dollar and return its corresponding
value in Indian currency . Consider 1$ as 70 rupees*/

#include<stdio.h>
#include<stdlib.h>

int DollarToINR(int iNo)
{
    const int Dollar = 70;

    return (iNo * Dollar);
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number of USD \n");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d\n", iRet);

    return EXIT_SUCCESS;
}