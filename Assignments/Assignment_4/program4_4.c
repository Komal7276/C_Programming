//Check voting eligibility

#include<stdio.h>
#include<stdlib.h>

void CheckVotingEligibility(int iAge)
{
    if(iAge < 0)
    {
        printf("Invalid Age\n");
    }
    else if(iAge < 18)
    {
        printf("Not Eligible for voting\n");
    }
    else
    {
        printf("Eligible for voting\n");
    }
}

int main()
{
    int iAge = 0;

    printf("Enter your age :\n");
    scanf("%d", &iAge);

    CheckVotingEligibility(iAge);

    return EXIT_SUCCESS;
}