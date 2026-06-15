#include <stdio.h>

int main() {
int arr[] = {10, 20, 30, 40, 50};
 int n = sizeof(arr) / sizeof(arr[0]); 
 int d = 2; 
      d = d % n;
    for (int i = 0; i < d; i++) {
        
 int temp = arr[0]; 
        
        for (int j = 0; j < n - 1; j++) {
 arr[j] = arr[j + 1];
        }
  arr[n - 1] = temp; 
    
  printf("Array after left rotation ");
  for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
 printf("\n");

    return 0;
}
