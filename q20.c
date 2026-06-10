#include <stdio.h>

int main() {
    int n, N, i, j, lP = -1, flag;

    printf("Enter numbers ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
     scanf("%d", &N);

 flag = 1;

        if(N < 2)
      flag = 0;
        else {
            for(j = 2; j <= N / 2; j++) {
      if(N % j == 0) {
  flag = 0;
    break;
  }
   }
        }

 if(flag && N > lP)
            lP = N;
    }

    if(lP == -1)
        printf("No prime number found");
    else
        printf("Largest prime number = %d", lP);

    return 0;
}