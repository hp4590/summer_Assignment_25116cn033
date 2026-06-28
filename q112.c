#include <stdio.h>

int main() {
 char name[50], phone[15], email[50];
 printf("== Contact Management System ===\n");

 printf("Enter Name: ");
 scanf(" %[^\n]", name);

    printf("Enter Phone Number ");
     scanf("%s", phone);

    printf("Enter Email: ");
    scanf("%s", email);

  printf("--- Contact Details ----");
 printf("Nam%s\n", name);
    printf("Phone Number %s\n", phone);
printf("Email %s\n", email);

    return 0;
}