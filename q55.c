#include <stdio.h>

int main() {
    int arr[50], n, i;
    int lr, sLr;

    printf("Enter  elements ");
scanf("%d", &n);

 printf("Enter array elements\n");
 for(i = 0; i < n; i++) {
     scanf("%d", &arr[i]);
    }
lr =sLr = arr[0];

 for(i = 1; i < n; i++) {
    if(arr[i] > lr) {
     sLr = lr;
     lr = arr[i];
        }
     else if(arr[i] > sLr && arr[i] != lr) {
         sLr = arr[i];
        }
    }

    printf("Second largest element = %d\n", sLr);

    return 0;
}