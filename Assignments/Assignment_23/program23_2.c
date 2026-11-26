/*Write a program which accept string from user and convert it into uppercase.*/

#include<stdio.h>
#include<stdlib.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }

        str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : ");
    scanf("%[^'\n']s", arr);

    struprx(arr);

    printf("Modified String is %s\n", arr);

    return EXIT_SUCCESS;
}