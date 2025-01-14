#include <stdio.h>
int main()
{
    int no, r, temp, s = 0;
    printf("Enter a number: ");
    scanf("%d", &no);
    temp = no;
    while (no > 0)
    {
        r = no % 10;
        s = s + (r * r * r);
        no = no / 10;
    }
    if (s == temp)
    {
        printf("%d is Armstrong", temp);
    }
    else
    {
        printf("%d is not Armstrong", temp);
    }
    printf("\n");
}