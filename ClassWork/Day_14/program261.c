//$   %   &   #   *

#include<stdio.h>
#include<stdlib.h>

void CountFrequencyX(char *str)
{
    int iCountSmall = 0, iCountCapital = 0,iCountDigit = 0;

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCapital++;
        }
        else //ISSUE
        {
            iCountDigit++;
        }

        str++;
    }

    printf("Frequency of Small letters : %d\n", iCountSmall);
    printf("Frequency of Capital letters : %d\n", iCountCapital);
    printf("Frequency of Digits : %d\n", iCountDigit);
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    fgets(Arr, sizeof(Arr), stdin);
    //scanf("%[^'\n']s", Arr);

    CountFrequencyX(Arr);

    return EXIT_SUCCESS;
}
