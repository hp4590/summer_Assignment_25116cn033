#include <stdio.h>

int main() {
    int arr[50], n, i, sum = 0;
    float ag;
 printf("Enter elements ");
 scanf("%d", &n);
 printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
 scanf("%d", &arr[i]);
        sum += arr[i];
    }

    ag = (float)sum / n;

    printf("Sum = %d", sum);
    printf("Average = %f", ag);

    return 0;
}