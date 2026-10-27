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

int main()
{
    int iValue1 = 10, iValue2 = 11, iResult = 0;

    iResult = iValue1 + iValue2;

    printf("%d\n",iResult);

    return 0;
}