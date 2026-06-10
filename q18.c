#include <stdio.h>

int main() {
    int n, temp, d, sum = 0, fact, i;

    printf("Enter a number: ");
 scanf("%d", &n);

    temp = n;

    while (temp > 0) {
        d = temp % 10;

        fact = 1;
 for (i = 1; i <= d; i++) {
            fact *= i;
      }

        sum += fact;
     temp /= 10;
    }

    if (sum == n)
        printf("%d is a Strong Number.\n", n);
 else
        printf("%d is not a Strong Number.\n", n);
    return 0;
}