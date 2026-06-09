#include <stdio.h>

int main() {
    int start, end, n, temp, r, sum;

    printf("Enter start and end of range: ");
    scanf("%d %d", &start, &end);

    for (n = start; n<= end; n++) {
        temp = n;
     sum = 0;

        while (temp != 0) {
            r = temp % 10;
     sum += r* r * r;
            temp /= 10;
  }

      if (sum == n)
            printf("%d ", n);
    }

    return 0;
}