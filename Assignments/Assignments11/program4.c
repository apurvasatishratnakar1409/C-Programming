#include<stdio.h>
int RangeSumEven(int iStart,int iEnd)
{
    if(iStart>iEnd||iStart<0|| iEnd<0)
    {
         printf("Invalid Range");
         return -1;

    }
    int iCnt=0;
    int iSum=0;
    
    for(iCnt=iStart;iCnt<=iEnd;iCnt++)
    {
        if(iCnt%2==0)
        {
        iSum=iSum+iCnt;
        }
       
        
    }
    return iSum;

}
//time complexity O(n)
int main()
{
    int ivlaue1=0,ivlaue2=0,iRet=0;
    printf("Enter Starting Number");
    scanf("%d",&ivlaue1);
    printf("Enter ending Number");
    scanf("%d",&ivlaue2);

    iRet=RangeSumEven(ivlaue1,ivlaue2);
    if(iRet!=-1)
    {
        printf("%d",iRet);
    }

    return 0;
}
