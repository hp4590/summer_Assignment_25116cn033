#include <stdio.h>

int main() {
 int array1[] = {1, 3, 5, 7}, 
    array2[] = {2, 4, 6, 8}, 
 size1 = sizeof(array1) / sizeof(array1[0]), 
 size2 = sizeof(array2) / sizeof(array2[0]), 
    size3 = size1 + size2, 
 mArray[size3], 
        i, j;

 for (i = 0; i < size1; i++) {
  mArray[i] = array1[i];
    }

 for (j = 0; j < size2; j++) {
        mArray[size1 + j] = array2[j];
    }

 printf("Merged Array: ");
    for (i = 0; i < size3; i++) {
        printf("%d ", mArray[i]);
    }
    printf("\n");

    return 0;
}