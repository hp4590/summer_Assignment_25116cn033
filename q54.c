#include <stdio.h>

int main() {
    int arr[50], freq[50];
    int n, i, j, count;

    printf("Enter  element");
    scanf("%d", &n);
 printf("Enter array element");
    for(i = 0; i < n; i++) {
scanf("%d", &arr[i]);
 freq[i] = -1;
    }

    for(i = 0; i < n; i++) {
 count = 1;

 if(freq[i] == 0)
 continue;

 for(j = i + 1; j < n; j++) {
 if(arr[i] == arr[j]) {
   count++;
 freq[j] = 0;
            }
        }
  freq[i] = count;
    }

    printf("Frequency of each element\n");
    for(i = 0; i < n; i++) {
if(freq[i] != 0) {
 printf("freq=%d", arr[i], freq[i]);
        }
    }

    return 0;
}