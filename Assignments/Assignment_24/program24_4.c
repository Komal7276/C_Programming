/*Write a program which accept string from user and accept one character.
Return index of last occurrence of that character.*/

#include<stdio.h>
#include<stdlib.h>

int LastChar(char *str, char ch)
{
    int index = 0;
    int lastIndex = 0;

    lastIndex = -1;
    
    while(str[index] != '\0')
    {
        if(str[index] == ch)
        {
            lastIndex = index;
        }

        index++;
    }

    return lastIndex;
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

    iRet = LastChar(arr, cValue);

    printf("Character location is %d\n", iRet);

    return EXIT_SUCCESS;
}