#include <stdio.h>
int roll[5], n, i;
char name[5][20];

void add()
{
printf("Enter num students ");
scanf("%d",&n);

 for(i=0;i<n;i++)
    {
printf("Roll");
 scanf("%d",&roll[i]);

 printf("Name: ");
 scanf("%s",name[i]);
  }
}

void display()
{
printf("Student Records\n");
 for(i=0;i<n;i++)
    {
 printf("%d%s\n",roll[i],name[i]);
 }
}
int main()
{
 add();
  display();

 return 0;
}