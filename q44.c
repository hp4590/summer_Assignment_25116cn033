#include <stdio.h>
int fact(int n)
 {
 int i, fact = 1;

for(i = 1; i <= n; i++) {
    fact = fact * i;
    }
return fact;
}

int main() {
 int n, result;

 printf("Enter a number: ");
 scanf("%d", &n);

    if(n< 0) {
 printf(" not defined f");
    } else {
        result = fact(n);
     printf("Fact of %d = %d", n, result);
    }
  return 0;
}