#include <stdio.h>
#include <math.h>

int main() {
    int bn, d, dec = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%d", &bn);

    while (bn != 0) {
        d = bn % 10;
 dec += d * pow(2, i);
 bn /= 10;
        i++;
    }
 printf("Decimal number = %d", dec);

    return 0;
}