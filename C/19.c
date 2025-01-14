#include <stdio.h>
int main()
{
    int n1, n2, n3;
    printf("Enter number 1: ");
    scanf("%d", &n1);
    printf("Enter number 2: ");
    scanf("%d", &n2);
    printf("Enter number 3: ");
    scanf("%d", &n3);
    if (n1 > n2)
    {
        if (n1 > n3)
        {
            printf("%d is greater", n1);
        }
        else
        {
            printf(" %d is greater", n3);
        }
    }
    else
    {
        if (n2 > n3)
        {
            printf("%d is greator", n2);
        }
        else
        {
            printf("%d is greater", n3);
        }
    }
    printf("\n");
}
