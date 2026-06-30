#include <stdio.h>

int main()
{
 int roll[10], i, n, ch, search;
char name[10][20];

 printf("Enter num student");
 scanf("%d",&n);

 do
    {
 printf("1.Add\n2Display\n3.Search\n4.Exit\n");
printf("Enter choice: ");
 scanf("%d",&ch);

switch(ch)
 {
 case 1:
 for(i=0;i<n;i++) {
printf("Roll: ");
 scanf("%d",&roll[i]);
 printf("Name ");
scanf("%s",name[i]);
 }
   break;

  case 2:
for(i=0;i<n;i++)
printf("%d\t%s\n",roll[i],name[i]);
 break;

  case 3:
 printf("Enter Roll");
 scanf("%d",&search);
for(i=0;i<n;i++)
{
 if(roll[i]==search)
 {
 printf("Found: %d %s",roll[i],name[i]);
 break;
  }
  }
 break;

 case 4:
 printf("Exit");
 break;

    default:
 printf("Invalid Choice");
      }

 }while(ch!=4);

 return 0;
}