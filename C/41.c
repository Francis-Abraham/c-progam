#include <stdio.h>
int main()
{
    int no, r, temp, s, lower, upper;
    printf(" Enter the lower limit: ");
    scanf(" %d", &lower);
    printf(" Enter the upper limit: ");
    scanf(" %d", &upper);
    printf("\n Armstrong numbers between %d and %d are: \n", lower, upper);
    while (lower <= upper)
    {
        no = lower;
        temp = no;
        s = 0;
        while (no > 0)
        {
            r = no % 10;
            s = s + (r * r * r);
            no = no / 10;
        }
        if (s == temp)
        {
            printf("%d, ", temp);
        }
        lower = lower + 1;
    }
    printf("\n");
}