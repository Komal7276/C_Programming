//Write a program which accept number from user and display its multiplication of factors

#include<stdio.h>
#include<stdlib.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMult = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMult = iMult * iCnt;
        }
    }

    return iMult;
}

int main()
{
    int iVAlue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iVAlue);

    iRet = MultFact(iVAlue);

    printf("%d\n", iRet);

    return EXIT_SUCCESS;
}