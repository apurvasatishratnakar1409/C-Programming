#include<stdio.h>

void Number(int iNo)
{
    if(iNo <= 50)
    {
        printf("Small:\n");
    }
    
    else if(iNo <= 100)
    {
        printf("Medium:\n");
    }
    
    else 
    {
        printf("Greater:\n");
    }
    return ;

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n:");
    scanf("%d",&iValue);

    Number(iValue);

    return 0;

}

