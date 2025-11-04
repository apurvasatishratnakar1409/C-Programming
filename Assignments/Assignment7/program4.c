#include<stdio.h>

void DisplayOdd(int iNo)
{
    int iCnt =0;
    for(iCnt =1 ; iCnt <= iNo ; iCnt++)
    {
        if(iCnt % 2 !=0 )
        {
            printf("%d ", iCnt);
        }
    }
    

}
int main()
{
    int iValue = 0 ;
     

    printf("enter the number:\n");
    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0 ;

}
