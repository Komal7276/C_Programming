/*Write a program which accept string from user and accept one character.
Return frequency of that character.*/

#include<stdio.h>
#include<stdlib.h>

int CountChar(char *str, char ch)
{
    int charCount = 0;

    while(*str != '\0')
    {
        if(ch == *str)
        {
            charCount++;
        }
        
        str++;
    }

    return charCount;
}

int main()
{
    char arr[20];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    printf("Enter the character : ");
    scanf(" %c", &cValue);

    iRet = CountChar(arr, cValue);

    printf("Character frequency is %d\n", iRet);

    return EXIT_SUCCESS;
}