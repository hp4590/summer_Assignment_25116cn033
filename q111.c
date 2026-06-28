#include <stdio.h>

int main() {
    char name[50];
    int tickets;
    float price = 200, total;

printf("==== Ticket Booking System =====\n");

    printf("Enter Customer Name: ");
 scanf(" %[^\n]", name);

    printf("Enter Number of Tickets ");
    scanf("%d", &tickets);
 total = tickets * price;

  printf("\n-- Booking Details -----\n");
    printf("Customer Name  %s\n", name);
printf("Tickets%d\n", tickets);
    printf("Price/Ticket ", price);
    printf("Total Amount  %f\n", total);

    return 0;
}