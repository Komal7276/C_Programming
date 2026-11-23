/*Accept number of rows and columns from user and display below pattern

input :     iRow = 4    iCol = 4
output :    *   *   *   #
            *   *   #   *
            *   #   *   *
            #   *   *   *
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, temp = 0;

    temp = iRow;
    
    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
            if(j == temp)
            {
                printf("#\t");
                temp--;
            }
            else
            {
                printf("*\t");
            }
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