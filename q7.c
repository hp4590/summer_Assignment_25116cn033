#include <stdio.h>

int main() {
    int n, prod=1, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!= 0)
     {
        d = n % 10;   
        prod = prod*d;  
        n = n/ 10;     
    }

    printf("product of digits = %d\n", prod);

    return 0;
}