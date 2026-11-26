/*Write a program which accept string from user and convert it into lower case.*/

#include<stdio.h>
#include<stdlib.h>

void strlwrx(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        
       str++;
    }
}

int main()
{
    char arr[20];

    printf("Enter String : \n");
    scanf("%[^'\n']s", arr);

    strlwrx(arr);
    
    printf("Modified Sring is %s\n", arr);

    return EXIT_SUCCESS;
}