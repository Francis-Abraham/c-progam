#include <stdio.h>
int main()
{
    char name[10];
    int mark1, mark2, mark3, index_mark;
    printf("enter your name: ");
    scanf("%s", name);
    printf("enter your mark of Physics: ");
    scanf("%d", &mark1);
    printf("enter your mark of Chemistry: ");
    scanf("%d", &mark2);
    printf("enter your mark of Maths: ");
    scanf("%d", &mark3);
    index_mark = (mark1 + mark2 + mark3) / 3;
    printf("\nName of the student is %s", name);
    printf("\nMark of physics: %d", mark1);
    printf("\nMark of chemistry: %d", mark2);
    printf("\nMark of maths: %d", mark3);
    printf("\nIndex mark for BCA: %d", index_mark);
    printf("\n");
}