//a     e   i   o   u
//A     E   I   O   U

#include<stdio.h>
#include<stdlib.h>

int CountVowelsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(    
               (*str == 'A') || (*str == 'a')
            || (*str == 'E') || (*str == 'e')
            || (*str == 'I') || (*str == 'i')
            || (*str == 'O') || (*str == 'o')
            || (*str == 'U') || (*str == 'u')
        )
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

    iRet = CountVowelsX(Arr);

    printf("Frequency of Vowels : %d\n", iRet);

    return EXIT_SUCCESS;
}
