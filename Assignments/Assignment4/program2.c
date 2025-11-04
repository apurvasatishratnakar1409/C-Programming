#include <stdio.h>

void FactREV(int iNo)
{
    int i;
 if(iNo <=0)
    {
        iNo = - iNo;
    }
    for(i=iNo/2  ; i>=1 ; i--)
    {
        if((iNo % i)== 0)
        {
            printf("%d\t",i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    FactREV(iValue);

    return 0;

}
