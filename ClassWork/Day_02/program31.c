#include<stdio.h>
#include<stdlib.h>

int main()
{
    char sName[30];
    int iAge = 0;
    float fMakrs = 0.0f;

    printf("Enter your Name : \n");
    scanf("%[^'\n']s",sName);  //Enter remains in input buffer

    printf("Enter your Age : \n");
    scanf(" %d",&iAge); //space added

    printf("Enter your Marks : \n");
    scanf("%f",&fMakrs);

    printf("Welcome %s \n", sName);
    printf("Your Age is : %d \n" , iAge);
    printf("Your Marks : %f\n", fMakrs);

    return EXIT_SUCCESS;
}