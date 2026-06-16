#include <stdio.h>

int main() {
    int arr[50],n = sizeof(arr) / sizeof(arr[0]), mFreq = 0;

 for (int i = 0; i < n; i++) {
        int freq = 1;
 for (int j = i + 1; j < n; j++) {
 if (arr[i] == arr[j]) {
                freq++;  }
 } if (freq > mFreq)
            mFreq = freq;
    }
  printf("Element(s) with maximum frequency ", mFreq);

    for (int i = 0; i < n; i++) {
 int freq = 1;
      int visited = 0;
 for (int k = 0; k < i; k++) {
  if (arr[k] == arr[i]) {
visited = 1;
  break;
  }  }
 if (visited)
continue;
for (int j = i + 1; j < n; j++) {
 if (arr[i] == arr[j])
 freq++;
  if (freq == mFreq)
 printf("%d ", arr[i]);
    }
    }
    return 0;
}