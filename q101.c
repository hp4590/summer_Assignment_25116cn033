#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret_number, guess, attempts = 0;

    srand(time(0));

    secret_number = (rand() % 100) + 1;
 printf("===================\n");
    printf("🎯 Welcome to the Number Guessing Game! 🎯\n");
    printf("===================\n");
    printf("I'm thinking of a number between 1 and 100.\n\n");

    do {
   printf("Enter your guess: ");
  if (scanf("%d", &guess) != 1) {
      printf("❌ Invalid input! Please enter a valid number.\n");
  while (getchar() != '\n');
  continue;
        }
  attempts++;

  if (guess < 1 || guess > 100) {
   printf("🚨 Out of bounds! Stay between 1 and 100.\n");
  } else if (guess < secret_number) {
  printf("📉 Too low! Try a higher number.\n\n");
} else if (guess > secret_number) {
   printf("📈 Too high! Try a lower number.\n\n");
 } else {
 printf("\n🎉 CONGRATULATIONS! You guessed it in %d attempts! 🎉\n", attempts);
        }

    } while (guess != secret_number);

    return 0;
}