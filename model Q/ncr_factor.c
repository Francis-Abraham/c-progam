/* 
Write a program to find out NCR factor of given number. Using loop. Do not use functions.
[Hint: find n! , r! and (n-r)! . then find the NCR = n!/r!x(n-r)!]
*/
#include <stdio.h>
int main()
{
    int n, r, i;
    long long n_fact = 1, r_fact = 1, n_r_fact = 1;

    // Input values of n and r
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of r: ");
    scanf("%d", &r);

    // Calculate n!
    for (i = 1; i <= n; i++)
    {
        n_fact *= i;
    }
    printf("n!= %lld\n", n_fact);

    // Calculate r!
    for (i = 1; i <= r; i++)
    {
        r_fact *= i;
    }
    printf("r!= %lld\n", r_fact);

    // Calculate (n-r)!
    for (i = 1; i <= (n - r); i++)
    {
        n_r_fact *= i;
    }
    printf("(n-r)!= %lld\n", n_r_fact);

    // Calculate NCR
    long long ncr = n_fact / (r_fact * n_r_fact);

    // Output the result
    printf("NCR of %d and %d is: %lld\n", n, r, ncr);

    return 0;
}
