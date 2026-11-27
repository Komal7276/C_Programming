/*Write a program which accept string from user and accept one character.
Return index of first occurrence of that character.*/

#include<stdio.h>
#include<stdlib.h>

int FirstChar(char *str, char ch)
{
    int index = 0;

    while(str[index] != '\0')
    {
        if(str[index] == ch)
        {
            return index;
        }

        index++;
    }

    return -1;
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

    iRet = FirstChar(arr, cValue);

    printf("Character locations is %d \n", iRet);

    return EXIT_SUCCESS;
}