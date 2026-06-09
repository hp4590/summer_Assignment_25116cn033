#include <stdio.h>

int main() {
    int start, end, i, j, Prime;

    printf("Enter the start of the range: ");
    scanf("%d", &start);

    printf("Enter the end of the range: ");
    scanf("%d", &end);

    printf("Prime numbers between %d and %d are:\n", start, end);

    for (i = start; i <= end; i++) {
        if (i < 2)
            continue;

        Prime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                Prime = 0;
                break;
            }
        }

        if (Prime)
            printf("%d ", i);
    }

    return 0;
}