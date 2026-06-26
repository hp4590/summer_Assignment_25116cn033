#include <stdio.h>

int main() {
    int age;

 printf("=============\n");
    printf("🗳️  Voting Eligibility Checker 🗳️\n");
    printf("======================\n");

    printf("Please enter your age: ");
    
 if (scanf("%d", &age) != 1) {
  printf("❌ Invalid input! Please enter a valid number for age.\n");
        return 1;
    }
 if (age < 0 || age > 120) {
      printf("🚨 That age seems unrealistic. Please enter a valid age.\n");
    } else if (age >= 18) {
  printf("✅ You are %d years old. You are eligible to vote!\n", age);
    } else {
printf("❌ You are %d years old. You are not eligible to vote yet.\n", age);
        printf("⏳ You need to wait %d more year(s).\n", 18 - age);
    }

    return 0;
}