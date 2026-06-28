#include <stdio.h>

int main() {
int id;
char name[50];

  printf("=== Library Management System ====");
 printf("Enter Book ID: ");
 scanf("%d", &id);
  printf("Enter Book Name: ");
    scanf(" %[^\n]", name);

  printf("Book Issued Sucessfully!\n");

    printf("-- Book Details ----");
  printf("Book ID   : %d\n", id);
    printf("Book Name : %s\n", name);

 return 0;
}