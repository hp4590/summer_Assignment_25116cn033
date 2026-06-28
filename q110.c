#include <stdio.h>

int main() {
  char name[50];
 int accNo;
    float balance, deposit, withdraw;
 printf("=== Bank Account System =====\n");
  printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", name);
printf("Enter Account Number: ");
    scanf("%d", &accNo);

    printf("Enter Initial Balance: ");\
 scanf("%f", &balance);

printf("Enter Deposit Amount: ");
    scanf("%f", &deposit);
 balance = balance + deposit;

  printf("Enter Withdraw Amount: ");
    scanf("%f", &withdraw);

 if (withdraw <= balance)
 balance = balance - withdraw;
 else
  printf("Insufficient Balance!\n");

 printf("\n----- Account Details -----\n");
 printf("Name    : %s\n", name);
  printf("Acc No. : %d\n", accNo);
  printf("Balance : %.2f\n", balance);

    return 0;
}