#include <stdio.h>
#include <stdbool.h>

bool CheckGreater(int iNum1)

{
    if(iNum1 > 100)
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
    printf("Plese enter number:\n");

    scanf("%d",&iValue);
    bRet = CheckGreater(iValue);

    if(bRet == true)
    {
        printf("Greater:\n");

    }
    else
    {
        printf("Smaller:\n");

    }
    return 0;
}
