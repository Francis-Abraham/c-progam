#include <stdio.h>
int main()
{
    char name[10];
    int mark1, mark2, mark3, total, avg, ptg;
    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your mark of Physics: ");
    scanf("%d", &mark1);
    printf("enter your mark of Chemistry: ");
    scanf("%d", &mark2);
    printf("enter your mark of Maths: ");
    scanf("%d", &mark3);
    total = mark1 + mark2 + mark3;
    avg = total / 3;
    ptg = (total * 100) / 300;
    printf("\n\tGrade card\n");
    printf("\nName of the student is %s", name);
    printf("\nMark of physics: %d", mark1);
    printf("\nMark of chemistry: %d", mark2);
    printf("\nMark of maths: %d", mark3);
    printf("\nTotal mark: %d", total);
    printf("\nAverage marks: %d", avg);
    printf("\nPercentage: %d", ptg);
    printf("\n");
}