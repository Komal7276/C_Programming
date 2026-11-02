#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckPalindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = 0;

    iTemp = iNo;

    while(iNo != 0)
    {
        iDigit = iNo % 10;

        iRev = (iRev * 10) + iDigit;
        
        iNo = iNo / 10;
    }

    if(iRev == iTemp)     //Issue solved
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter a number : \n");
    scanf("%d", &iValue);

    bRet = CheckPalindrome(iValue);

    if(bRet == true)
    {
        printf("Number is Palindrome\n");
    }
    else
    {
        printf("Number is not a Palindrome\n");
    }
    
    return EXIT_SUCCESS;
}