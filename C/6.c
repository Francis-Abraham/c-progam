#include <stdio.h>
int main()
{
    char name[10];
    char dob[10];
    char address[20];
    char caurse[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter Your date of birth: ");
    scanf("%s", dob);
    printf("Enter your address: ");
    scanf("%s", address);
    printf("Enter your caurse: ");
    scanf("%s", caurse);
    printf("\nName is %s", name);
    printf("\nDate of birth is %s", dob);
    printf("\nAddress is %s", address);
    printf("\nCaurse is %s", caurse);
    printf("\n");
}
