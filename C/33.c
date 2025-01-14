#include <stdio.h>
int main()
{
    int n1 = 1, n2 = 100, es = 0, os = 0;
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
    printf("\nSum of even numbers are: ");
    printf(" %d", es);
    printf("\nSum of odd numbers are: ");
    printf("%d", os);
    printf("\n");
}
