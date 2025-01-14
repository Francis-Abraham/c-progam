#include <stdio.h>
int main()
{
    int n1, n2, quotient, remainder;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    if (n2 <= 0)
    {
        printf("Error. Number 2 should be positive and non zero number.");
    }
    else if (n2 >= n1)
    {
        printf("Error. Number 2 should be lesser than number 1.");
    }
    else
    {
        quotient = n1 / n2;
        remainder = n1 % n2;
        printf("\nquotient of the division is %d", quotient);
        printf("\nRemainder of the division is %d", remainder);
    }
    printf("\n");
}