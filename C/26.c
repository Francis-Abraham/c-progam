#include <stdio.h>
int main()
{
    int l, n = 1, sum = 0, ctr = 1;
    printf("Enter a limit: ");
    scanf("%d", &l);
    while (ctr <= l)
    {
        sum = sum + ctr;
        ctr = ctr +1;
    }
    printf("sum is %d", sum);
    printf("\n");
}