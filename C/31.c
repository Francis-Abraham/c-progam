#include <stdio.h>
int main()
{
    int n, no, l = 0, ctr = 1;
    printf("Enter limit: ");
    scanf(" %d", &n);
    while (ctr <= n)
    {
        printf("Enter a number: ");
        scanf("%d", &no);
        if (no >= l)
        {
            l = no;
        }
        ctr = ctr + 1;
    }
    printf("Largest is %d", l);
    printf("\n");
}