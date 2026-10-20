//Accept one character from user and convert case of that character

#include<stdio.h>
#include<stdlib.h>

void DisplayConvert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))
    {
        cValue = cValue + 32;
        printf("%c", cValue);
    }
    else if((cValue >= 'a') && (cValue <= 'z'))
    {
        cValue = cValue - 32;
        printf("%c", cValue);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return EXIT_SUCCESS;
}