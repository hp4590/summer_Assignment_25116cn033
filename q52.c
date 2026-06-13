#include <stdio.h>

int main() {
    int arr[50], n, i,e=0,o=0;

printf("Enter  elements ");
    scanf("%d", &n);
printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
 if(arr[i] % 2 == 0)
            e++;
        else
            o++;
    }

    printf("Number 0f e and o=%d",e,o);

    return 0;
}