#include <stdio.h>
int main()
{
    int s = 0, c = 1, ct, n;
    printf("How much numbers do you want count: ");
    scanf("%d", &ct);
    while (c <= ct)
    {
        printf("Enter a number: ");
        scanf("%d", &n);
        c = c + 1;
        s = s + n;
    }
    printf("limit you entered reached.");
    printf("\nThe sum of the numbers you entered is %d", s);
    printf("\n");
}