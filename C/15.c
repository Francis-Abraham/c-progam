#include <stdio.h>
int main()
{
    int num1, num2;
    printf("enter your first number: ");
    scanf("%d", &num1);
    printf("enter your second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d is the largest number", num1);
    }
    else
    {
        printf("%d is the largest number", num2);
    }
    printf("\n");
}