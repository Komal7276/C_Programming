//Calculate student grade

#include<stdio.h>
#include<stdlib.h>

void DisplayGrade(float fMarks)
{
    if((fMarks >= 0) && (fMarks < 40))
    {
        printf("Fail\n");
    }
    else if((fMarks >= 40 ) && (fMarks < 60))
    {
        printf("Grade D\n");
    }
    else if((fMarks >= 60 ) && (fMarks < 75))
    {
        printf("Grade C\n");
    }
    else if((fMarks >= 75 ) && (fMarks < 90))
    {
        printf("Grade B\n");
    }
    else if((fMarks >= 90 ) && (fMarks <= 100))
    {
        printf("Grade A\n");
    }
    else
    {
        printf("Invalid marks\n");
    }
}

int main()
{
    float fMarks = 0.0f;

    printf("Enter marks :\n");
    scanf("%f", &fMarks);

    DisplayGrade(fMarks);

    return EXIT_SUCCESS;
}