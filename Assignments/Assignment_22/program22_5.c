/*Accept number of rows and columns from user and display below pattern

input :     8
output :    2    4   6   8   10  12  14  16

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0, iEven = 0;

    for(iCnt = 1, iEven = 2; iCnt <= iNo; iCnt++, iEven+=2)
    {
        printf("%d\t",iEven);
    }

    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return EXIT_SUCCESS;
}