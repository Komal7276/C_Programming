#include<stdio.h>
#include<stdlib.h>

int CountCaptialX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }

        str++;
    }

    return iCount;
}

int main()
{
    char Arr[100] = {'\0'};
    int iRet = 0;

    printf("Enter string :\n");
    //fgets(Arr, sizeof(Arr), stdin);
    scanf("%[^'\n']s", Arr);

    iRet = CountCaptialX(Arr);

    printf("Frequency of capital letters : %d\n", iRet);

    return EXIT_SUCCESS;
}
