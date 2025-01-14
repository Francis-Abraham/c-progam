#include <stdio.h>
int main()
{
    char name[10];
    int mark1, mark2;
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("enter mark 1: ");
    scanf("%d", &mark1);
    printf("enter mark 2: ");
    scanf("%d", &mark2);
    if (mark1 > mark2)
    {
        printf("\n%d is the largest mark of %s", mark1, name);
    }
    else
    {
        printf("\n %d is the largest mark of %s", mark2, name);
    }
    printf("\n");
}