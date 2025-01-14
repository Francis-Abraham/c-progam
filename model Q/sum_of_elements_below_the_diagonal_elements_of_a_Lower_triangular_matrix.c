/*
Write a c program to find sum of elements below the diagonal elements of a matrix
if the matrix is Lower triangular matrix. Using user defined functions for
read, write, checking and sum. Pass parameters. Check all validations.
*/
#include <stdio.h>
// Function to read matrix elements
void readMatrix(int matrix[10][10], int n)
{
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
}

// Function to display matrix
void displayMatrix(int matrix[10][10], int n)
{
    printf("The matrix is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

// Function to check if matrix is lower triangular
int isLowerTriangular(int matrix[10][10], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (matrix[i][j] != 0)
            {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // Lower triangular
}

// Function to calculate sum of elements below diagonal
int sumBelowDiagonal(int matrix[10][10], int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main()
{
    int n, matrix[10][10];

    // Input matrix size with validation
    printf("Enter the size of the square matrix (max 10): ");
    while (scanf("%d", &n) != 1 || n <= 0 || n > 10)
    {
        printf("Invalid input. Please enter a positive integer (1-10): ");
        while (getchar() != '\n')
            ; // Clear input buffer
    }

    readMatrix(matrix, n);
    displayMatrix(matrix, n);

    if (isLowerTriangular(matrix, n))
    {
        int sum = sumBelowDiagonal(matrix, n);
        printf("The sum of elements below the diagonal is: %d\n", sum);
    }
    else
    {
        printf("The matrix is not lower triangular. Cannot calculate sum.\n");
    }

    return 0;
}
