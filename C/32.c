#include <stdio.h>
int main()
{
    int n, no, sm, ctr = 1;
    printf("Enter the limit: ");
    scanf("%d", &n);
    printf("Enter the first number: ");
    scanf("%d", &sm);
    while (ctr < n)
    {
        printf("Enter another number: ");
        scanf("%d", &no);
        if (no <= sm)
        {
            sm = no;
        }
        ctr = ctr + 1;
    }
    printf("Smallest is %d", sm);
    printf("\n");
}
