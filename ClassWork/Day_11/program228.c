#include<stdio.h>
#include<stdlib.h>

int main()
{
    char Arr[100] = {'G','a','n','e','s','h'}; //Removed \0

    printf("%s\n", Arr);

    printf("Size of Array is : %d\n", sizeof(Arr));

    return EXIT_SUCCESS;
}