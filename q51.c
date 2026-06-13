#include <stdio.h>

int main() {
    int arr[50], n, i,lr,small;
    

    printf("Enter  elements ");
    scanf("%d", &n);

    printf("Enter %d elements", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
 lr = small = arr[0];

    for(i = 1; i < n; i++) {
        if(arr[i] > lr)
lr = arr[i];

 if(arr[i] < small)
 small = arr[i];
    }
 printf("Lr and small = %d\n", lr,small);

return 0;
}