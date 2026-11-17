/*Accept number of rows and columns from user and display below pattern

input :     iRow = 4    iCol = 4
output :    A   B   C   D
            a   b   c   d
            A   B   C   D
            a   b   c   d
*/

#include<stdio.h>
#include<stdlib.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0;
    char uCh = '\0', lCh = '\0';

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, uCh = 'A', lCh = 'a' ; j <= iCol; j++)
        {
            if((i % 2) == 0)
            {
                printf("%c\t",lCh);
                lCh++;
            }
            else
            {
                printf("%c\t", uCh);
                uCh++;
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