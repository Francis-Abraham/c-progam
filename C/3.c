#include <stdio.h>
int main()
{
    char name[10];
    int mark1, mark2, mark3, total;
    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your mark 1: ");
    scanf("%d", &mark1);
    printf("enter your mark 2: ");
    scanf("%d", &mark2);
    printf("enter your mark 3: ");
    scanf("%d", &mark3);
    total = mark1 + mark2 + mark3;
    printf("\n\nyour name is %s", name);
    printf("\nTotal mark is %d", total);
    printf("\n");
}
