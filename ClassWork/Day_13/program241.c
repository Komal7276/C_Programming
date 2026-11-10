#include<stdio.h>
#include<stdlib.h>

void Display(char *str)
{
    printf("%s\n",str);
}

int main()
{
    char Arr[100];

    printf("Enter string : \n");
    fgets(Arr, sizeof(Arr), stdin);
    //scanf("%[^'\n']s", Arr);

    Display(Arr);

    return EXIT_SUCCESS;
}
