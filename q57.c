#include <stdio.h>

int main() {
    int arr[5];
    int temp;

    // 1. Take input from the user
    printf("Enter 5 numbers:\n");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // 2. Reverse the array
    for(int i = 0; i < 2; i++) { // loops exactly twice to swap outer elements
        temp = arr[i];
        arr[i] = arr[4 - i];
        arr[4 - i] = temp;
    }


    printf("\nReversed array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}