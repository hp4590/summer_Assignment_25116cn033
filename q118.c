#include <stdio.h>

int main()
{
 int id[5], i, n;
    char book[5][20];

 printf("Enter num books ");
 scanf("%d", &n);

 for(i=0; i<n; i++)
    {
printf("Book id ");
  scanf("%d", &id[i]);

 printf("Book Name: ");
 scanf("%s", book[i]);
    }

 printf("Library Records\n");

for(i=0; i<n; i++)
    {
 printf("%d%s\n", id[i], book[i]);
    }

return 0;
}