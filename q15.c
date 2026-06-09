#include <stdio.h>

int main() {
    int n,i, r;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    i = n;

    while (i!= 0) {
        r = i % 10;
        result += r * r * r;
        i/= 10;
    }

    if (result == n)
        printf("%d is  Armstrong number.", n);
    else
        printf("%d is not  Armstrong number.", n);

return 0;
}