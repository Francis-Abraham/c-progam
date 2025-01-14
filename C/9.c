#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter number 1: ");
    scanf("%d", &num1);
    printf("enter number 2: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("number 1 is greater (%D)", num1);
    }
    else
    {
        printf("number 2 is greater (%d)", num2);
    }
    printf("\n");
}