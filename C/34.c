#include <stdio.h>
int main()
{
    int no, r, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    while (no > 0)
    {
        r = no % 10;
        sum = sum + r;
        no = no / 10;
    }
    printf("sum of digit is %d", sum);
    printf("\n");
}
