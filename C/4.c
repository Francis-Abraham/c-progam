#include <stdio.h>
int main()
{
    char name[10];
    char dob[10];
    char college[20];
    char program[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter Your date of birth: ");
    scanf("%s", dob);
    printf("Enter your college: ");
    scanf("%s", college);
    printf("Enter your program: ");
    scanf("%s", program);
    printf("\nName is %s", name);
    printf("\nDate of birth is %s", dob);
    printf("\nCollege is %s", college);
    printf("\nProgram is %s", program);
    printf("\n");
}