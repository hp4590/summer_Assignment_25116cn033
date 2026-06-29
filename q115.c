#include <stdio.h>
#include <string.h>

int main()
{
 char str[50];
 int choice;

 printf("Enter string");
    gets(str);

 printf("Menu");
  printf("1String Length\n");
 printf("2Reverse String\n");
 printf("3.Uppercase");
 printf("4. Lowercase\n");
 printf("Enter  choice");
scanf("%d", &choice);

switch(choice)
    {
 case 1:
 printf("Length = %d", strlen(str));
  break;

 case 2:
  strrev(str);
 printf("Reverse = %s", str);
 break;

case 3:
 printf("Uppercase = %s", strupr(str));
  break;

 case 4:
 printf("Lowercase = %s", strlwr(str));
 break;

default:
printf("Invalid Choice");
    }
return 0;
}