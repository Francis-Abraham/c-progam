#include <stdio.h>
#include <string.h>
int main()
{
    int n1, sqr, n2 = 10;
    char ans[10];
    while (n2 == 10)
    {
        printf("Enter a single digit number: ");
        scanf("%d", &n1);
        if (n1 <= 9 && n1 > 0)
        {
            sqr = n1 * n1;
            n1 = sqr;
            printf("Square of the number is %d ", sqr);
        }
        else
        {
            printf("Enter single\n");
            continue;
        }
        printf("\nDo you want top continue y/n: ");
        scanf("%s", &ans);
        if (strcmp(ans, "y") == 0)
        {
            continue;
        }
        else
        {
            break;
        }
        printf("\n");
    }
}