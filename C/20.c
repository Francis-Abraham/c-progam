#include <stdio.h>
int main()
{
    char name[10];
    int mark1, mark2, mark3, total, avg;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your mark 1: ");
    scanf("%d", &mark1);
    printf("Enter your mark 2: ");
    scanf("%d", &mark2);
    printf("Enter your mark 3: ");
    scanf("%d", &mark3);
    total = mark1 + mark2 + mark3;
    avg = total / 3;
    printf("\nTotal mark - %d", total);
    printf("\nAverage mark = %d", avg);
    if (avg >= 90)
    {
        printf("\nA + grade");
    }
    else if (avg >= 80)
    {
        printf("\nA grade");
    }
    else if (avg >= 70)
    {
        printf("\nB + grade");
    }
    else if (avg >= 60)
    {
        printf("\nB grade");
    }
    else if (avg >= 50)
    {
        printf("\nC grade");
    }
    else
    {
        printf("\nBetter luck next time");
    }
    printf("\n");
}