#include <stdio.h>
int main()
{
    char name[10];
    int age;
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Enter your Age: ");
    scanf("%d", &age);
    printf("\nHello");
    printf("Name is \t%s\n", name);
    printf("Age is %d", age);
    printf("\n");
}
