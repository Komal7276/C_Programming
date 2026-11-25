/*Accept number of rows and columns from user and display below pattern

input :     4
output :    #   1   *   #   2   *   #   3   *   #   4   * 

*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
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