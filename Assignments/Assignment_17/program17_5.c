/*Accept number of rows and columns from user and display below pattern

input :     iRow = 5    iCol = 5
output :    1   2   3   4   5
            2   3   4   5   6
            3   4   5   6   7
            4   5   6   7   8
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, temp1 = 0, temp2 = 0;

    for(i = 1, temp1 = 1; i<= iRow; i++, temp1++)
    {
        for(j = 1, temp2 = temp1; j <= iCol; j++, temp2++)
        {
            printf("%d\t", temp2);
        }

        printf("\n");
    }

    printf("\n");
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}
