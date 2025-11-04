#include<stdio.h>

void RangeDisplayEven(int iStart , int iEnd)
{
    int i = 0;

    if(iStart > iEnd)
    {
        printf("Invalid Range\n");
        return;
    }

    for(i = iStart; i <= iEnd; i++)
    {
        if(i % 2 == 0)     
        {
            printf("%d ", i);
        }
    }
}
int main()
{
    int iValue1 = 0.0,iValue2 = 0.0;
    double dRet = 0.0;

    printf("Enter the starting points:\n");
    scanf("%d",&iValue1);

    printf("Enter the ending points:\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1 , iValue2);

   
    return 0;

}
