#include <stdio.h>
int main()
{
    char name[10];
    int mark1, mark2, mark3, total, avg;
    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your mark 1: ");
    scanf("%d", &mark1);
    printf("enter your mark 2: ");
    scanf("%d", &mark2);
    printf("enter your mark 3: ");
    scanf("%d", &mark3);
    total = mark1 + mark2 + mark3;
    avg = total / 3;
    printf("\nTotal mark = %d", total);
    printf("\nAverage mark = %d", avg);
    if (avg > 50)
    {
        printf("\n%s is pass", name);
    }
    else
    {
        printf("\n%s is fail", name);
    }
    printf("\n");
}