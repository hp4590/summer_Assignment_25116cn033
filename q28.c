#include <stdio.h>

int reverse(int n) {
    if(n == 0)
 return 0;

    printf("%d", n % 10);
 reverse(n / 10);
}
int main() {
    int n;
scanf("%d", &n);
 reverse(n);

    return 0;
}