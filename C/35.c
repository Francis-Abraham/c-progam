#include <stdio.h>
int main()
{
    int n, r, s = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        r = n % 10;
        s = s * 10 + r;
        n = n / 10;
    }
    printf("Reverse of the number you enterd is: %d", s);
    printf("\n");
}
