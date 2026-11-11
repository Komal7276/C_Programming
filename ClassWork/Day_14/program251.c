#include<stdio.h>
#include<stdlib.h>

int CountSpaceX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
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

    iRet = CountSpaceX(Arr);

    printf("Frequency of Space : %d\n", iRet);

    return EXIT_SUCCESS;
}
