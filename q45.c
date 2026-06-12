#include <stdio.h>

int Palindrome(int n) {
 int temp = n, rev = 0;
while (temp > 0) {
 rev = rev * 10 + temp % 10;
      temp /= 10;
    }
 return n == rev;
}

int main() {
    int n;
 scanf("%d", &n);

    if (Palindrome(n))
     printf("Palindrome");
    else
     printf("Not Palindrome");

 return 0;
}