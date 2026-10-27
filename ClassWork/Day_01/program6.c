/*
    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write a program
    Step 5 : Test the program
*/ 

////////////////////////////////////////////////////////////
//
//  Step 1: Understand the problem statement
//          User id going to enter any 2 integers
//          and we have to perform addition
//
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  Step 2 : Write the algorithm
/*
    START 
        Accept first number as No1
        Accept second number as No2
        Create a variable as Ans to store result
        Perform the Addition and store into Ans
        Display the result from Ans
    End
*/
////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////
//
//  Step 3: Decide the programming language
//          we select c programming
//
///////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////
//
//  Step 4: Write a program
//
///////////////////////////////////////////////////////////

#include<stdio.h>

int Addition(int iNo1, int iNo2)
{
    int iAns = 0;

    iAns = iNo1 + iNo2;     //Business loic

    return iAns;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iResult = 0;

    printf("Enter First Number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second Number : \n");
    scanf("%d",&iValue2);

    iResult = Addition(iValue1, iValue2);   

    printf("Addition is : %d \n", iResult);

    return 0;
}

//In case of industrial programming don't write logic inside main method write in helper function
//Business logic should be reusable