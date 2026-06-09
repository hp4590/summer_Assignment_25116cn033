#include<stdio.h>
int main (){
    int n,i,fact=1;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0)
    {
    printf("factorial of a number does'nt exist");
    }
    else {
for(i=1;i<=n;i++)
{

    fact*=i;
}
printf("factorial =%d",fact);
return 0;
    }
}