#include<stdio.h>

int Multiply(int iNum1 , int iNum2 , int iNum3)
{
    if(iNum1 == 0 || iNum2 == 0 || iNum3 == 0)
    {
        printf("Multiplication is zero\n");
        return 0;
    }
    else
    {
        return iNum1 * iNum2 * iNum3;
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;

    printf("Please enter three numbers:\n");
    scanf("%d %d %d", &iValue1, &iValue2, &iValue3);

    iRet = Multiply(iValue1, iValue2, iValue3);

    if(iRet != 0)
    {
        printf("Multiplication is %d\n", iRet);
    }

    return 0;
}
