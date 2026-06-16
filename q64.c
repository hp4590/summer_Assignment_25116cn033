#include <stdio.h>

int main() {
    int arr[]={1,2,3,4,5}, n = sizeof(arr) / sizeof(arr[0]);

 printf("Duplicate elements");

    for (int i = 0; i < n; i++) {
 int Duplicate = 0;

 for (int k = 0; k < i; k++) {
  if (arr[i] == arr[k]) {
Duplicate = 1;
break;
  }
 }
 if (Duplicate)
continue;

for (int j = i + 1; j < n; j++) {
    if (arr[i] == arr[j]) {
 printf("%d ", arr[i]);
  break;
     }
  }
    }

return 0;
}