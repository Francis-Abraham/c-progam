/*
Write a c program to find sum of first and last digits of a number, if the first digit is even number, 
using while. Do not use array and library functions.
*/
#include <stdio.h>
int main() {
    int number, firstDigit, lastDigit, sum;

    // Input the number
    printf("Enter a number: ");
    scanf("%d", &number);

    // Initialize lastDigit
    lastDigit = number % 10;

    // Extract the first digit
    while (number >= 10) {
        number /= 10;
    }
    firstDigit = number;

    // Check if the first digit is even
    if (firstDigit % 2 == 0) {
        sum = firstDigit + lastDigit;
        printf("Sum of first and last digits: %d\n", sum);
    } else {
        printf("The first digit is not even.\n");
    }

    return 0;
}
