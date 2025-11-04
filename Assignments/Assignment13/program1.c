#include<stdio.h>

void PrintNumber(int iLimit)
{
    int iCnt=0;
    for(iCnt=1;iCnt<=iLimit;iCnt++)
    { 
   
            printf("%d ",iCnt);
        

    }
    
//time complexity O(n)

}

int main()
{
    int iLimit=0;
    printf("Enter the Number:");
    scanf("%d",&iLimit);
    PrintNumber(iLimit);
    return 0;

}
