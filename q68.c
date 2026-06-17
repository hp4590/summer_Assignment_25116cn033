#include <stdio.h>

int main() {
    int array1[] = {10, 15, 20, 25, 30}, 
   array2[] = {15, 5, 30, 40}, 
     size1 = sizeof(array1) / sizeof(array1[0]), 
     size2 = sizeof(array2) / sizeof(array2[0]), i,j;
        
 printf("Common elements ");
  for (i = 0; i < size1; i++) {
for (j = 0; j < size2; j++) {
      if (array1[i] == array2[j]) {
     printf("%d ", array1[i]);
 break;   }
        }
 }
    printf("\n");
  return 0;
}