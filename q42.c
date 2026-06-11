#include <stdio.h>
int maximum(int a, int b) {
  if(a > b)
  return a;
 else
 return b;
}

int main() {
 int n1, n2, max;

    printf("Enter two number ");
 scanf("%d %d", &n1, &n2);

max = maximum(n1, n2);
 printf("Maximum = %d\n", max);
 return 0;
}