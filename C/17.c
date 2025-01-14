#include <stdio.h>
int main()
{
    int num, ans;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num <= 10)
    {
        ans = num * num;
        printf("The square of the number %d is %d", num, ans);
    }
    else
    {
        printf("The entered number is greater than 10");
    }
    printf("\n");
}
