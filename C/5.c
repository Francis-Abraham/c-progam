#include <stdio.h>
int main()
{
    char cname[10];
    char iname[10];
    int ppu, qty, total;
    printf("Enter name: ");
    scanf("%S", cname);
    printf("Enter item name: ");
    scanf("%S", iname);
    printf("Enter item price: ");
    scanf("%d", &ppu);
    printf("Enter quantity: ");
    scanf("%d", &qty);
    total = ppu * qty;
    printf("Total price is %d", total);
    printf("\n");
}