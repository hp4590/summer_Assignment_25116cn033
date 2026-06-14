#include <stdio.h>

int main() {
    int arr[50], n, key, i, found = 0;
 printf("Enter  element ");
    scanf("%d", &n);

    printf("Enter  elements");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search");
    scanf("%d", &key);

    for(i = 0; i < n; i++) {
     if(arr[i] == key) {
     found = 1;
    printf("Element position ", i + 1);
     break;
        }
    }
if(found == 0) {
 printf("Element not found");
    }

    return 0;
}