#include <stdio.h>

int main()
{
 int id, qty, choice;
 float price;
printf("Inventory Management System");
 printf("1. Add Product\n");
printf("2. Display Product\n");
  printf("Enter your choice ");
 scanf("%d", &choice);

switch(choice)
    {
 case 1:
 printf("Enter Product ID");
scanf("%d", &id);

printf("Enter Quantit ");
    scanf("%d", &qty);

 printf("Enter Price ");
scanf("%f", &price);

 printf("Product Added Successfully!");
  break;

  case 2:
  printf("Product Details");
 printf("Product ID %d\n", id);
 printf("Quantit%d\n", qty);
 printf("Price  %f\n", price);
 break;

 default:
  printf("Invalid Choice");
    }

return 0;
}