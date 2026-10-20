/*Accept one character from user and check whether 
that character is vowel(a,e,i,o,u) or not*/

#include<stdio.h>
#include<stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkVowel(char cValue)
{
    if( cValue == 'a' || cValue == 'A' || 
        cValue == 'e' || cValue == 'E' ||
        cValue == 'i' || cValue == 'I' ||
        cValue == 'o' || cValue == 'O' ||
        cValue == 'u' || cValue == 'U' )
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue = '\0';
    BOOL bRet = FALSE;

    printf("Enter character\n");
    scanf("%c", &cValue);

    bRet = ChkVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else
    {
        printf("It it not Vowel");
    }

    return EXIT_SUCCESS;
}