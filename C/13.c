#include <stdio.h>
int main()
{
    char cname[10];
    char iname[10];
    int ppu, qty, total, discount, net, no;
    printf("Enter your name: ");
    scanf("%s", cname);
    printf("\tEnter item number \n");
    printf("1. shirt\n");
    printf("2. jeens\n");
    printf("3. churidar\n");
    printf("4. others\n");
    printf("Enter item number: ");
    scanf("%d", &no);
    printf("Enter item price: ");
    scanf("%d", &ppu);
    printf("Enter quantity sold: ");
    scanf(" %d", &qty);
    total = ppu * qty;
    if (no == 1)
    {
        printf("\n\tltem name : shirt");
        discount = (total * 5) / 100;
    }
    else if (no == 2)
    {
        printf("\n\tltem name : jeens");
        discount = (total * 20) / 100;
    }
    else if (no == 3)
    {
        printf("\n\tItem name : churidar");
        discount = (total * 10) / 100;
    }
    else
    {
        printf("Enter item name: ");
        scanf("%s", iname);
        printf("\n\n]tem name : %s", iname);
        discount = (total * 2) / 100;
    }
    net = total - discount;
    printf("\nCustomer name: %s", cname);
    printf("\nTotal price: %d", total);
    printf("\nDiscount price: %d", discount);
    printf("\nNet amount: %d", net);
    printf("\n");
}