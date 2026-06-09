#include <stdio.h>

int main() {
    int n, rv=0, d,i;

    printf("Enter a number: ");
    scanf("%d", &n);
i=n;
    while (n!= 0)
     {
        d = n % 10;   
        rv = rv*10 + d;  
        n = n/ 10;     
    }
if(i==rv)
    printf("pallindrome number" );
else
printf("Not pallindrome");
    return 0;
}