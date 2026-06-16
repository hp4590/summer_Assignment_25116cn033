#include <stdio.h>

int main() {
  int arr[] = {1, 4, 5, 6, 3, 2},sum=7,n = sizeof(arr) / sizeof(arr[0]);
for (int i = 0; i < n; i++) {

 for (int j = i + 1; j < n; j++) {
  if (arr[i] + arr[j] == sum) {
    
 printf("Pair: %d %d\n", arr[i], arr[j]);
 }
 }
    }
 return 0;
}