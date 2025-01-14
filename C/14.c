#include <stdio.h>
int main()
{
    char name[10];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("%s is eligible for voting", name);
    }
    else
    {
        printf("%s is not eligible for voting", name);
    }
    printf("\n");
}