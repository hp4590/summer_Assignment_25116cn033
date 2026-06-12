#include <stdio.h>
#include <math.h>

int Armstrong(int n) {
       int temp = n, sum = 0, d= 0;
 while (temp > 0) {
 d++;
temp /= 10;
    }
 temp = n;

    while (temp > 0) {
 int rem = temp % 10;
sum += pow(rem, d);
        temp /= 10;
    }

    return sum == n;
}

int main() {
int n;
 scanf("%d", &n);

 if (Armstrong(n))
 printf("Armstrong Number");
    else
  printf("Not Armstrong Number");

    return 0;
}