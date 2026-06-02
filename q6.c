#include <stdio.h>

int main() {
    int n, rv=0, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n!= 0)
     {
        d = n % 10;   
        rv = rv*10 + d;  
        n = n/ 10;     
    }

    printf("reversed number = %d\n", rv);

    return 0;
}