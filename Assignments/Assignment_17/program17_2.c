/*Accept number of rows and columns from user and display below pattern

input :     iRow = 4    iCol = 4
output :    2   4   6   8   10
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iDigit = 2;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++, iDigit += 2)
        {
            if((i % 2 ) != 0)
            {
                if(j == 1)
                {
                    iDigit = 2;
                }

                printf("%d\t", iDigit);
                
            }
            else
            {
                if(j == 1)
                {
                    iDigit = 1;
                }
                printf("%d\t", iDigit);
            }
        }

        if(iDigit == 10)
        {
            iDigit = 1;
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns : \n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return EXIT_SUCCESS;
}