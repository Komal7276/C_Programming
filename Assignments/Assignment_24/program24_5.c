/*Write a program which accept string from user reverse that string in place*/

#include<stdio.h>
#include<stdlib.h>

void StrRev(char *str)
{
    char *first = str;

    while(*str != '\0')
    {
        str++;
    }

    printf("Reverse String : ");

    while(str >= first)
    {
        printf("%c", *str);
        str--;
    }

    printf("\n");
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", &arr);

    StrRev(arr);

    return EXIT_SUCCESS;
}