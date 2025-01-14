#include <stdio.h>
int main()
{
    int n1, n2, es = 0, os = 0;
    printf("Enter the lower limit: ");
    scanf(" %d", &n1);
    printf("Enter the upper limit: ");
    scanf("%d", &n2);
    printf("\n Sum of even and odd numbers between %d and %d are: \n", n1, n2);
    while (n1 <= n2)
    {
        if (n1 % 2 == 0)
        {
            es = es + n1;
            n1 = n1 + 1;
        }
        else
        {
            os = os + n1;
            n1 = n1 + 1;
        }
    }
    printf("\nSum of oven numbers are: ");
    printf("%d", es);
    printf("\nSum of odd numbers are: ");
    printf(" %d", os);
    printf("\n");
}