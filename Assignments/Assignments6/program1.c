#include<stdio.h>

int main()
{
    char Name[30];
    printf("Plese enter the full name:\n");
    scanf("%[^\n]",Name);

    printf("Your name is %s\n",Name);
    return 0;
}
