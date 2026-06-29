#include <stdio.h>

int main()
{
int a[50], n, i, choice, sum = 0;

 printf("Enter size of array: ");
 scanf("%d", &n);

 printf("Enter array elements:\n");
 for(i = 0; i < n; i++)
 scanf("%d", &a[i]);

 printf("Menu");
 printf("1.Display Array");
printf("2- Sum of Array\n");
printf("3. Find Maximum\n");
 printf("4. Find Minimum\n");
 printf("Enter your choice");
 scanf("%d", &choice);

  switch(choice)
    {
 case 1:
printf("Array Elements: ");
 for(i = 0; i < n; i++)
 printf("%d ", a[i]);
  break;
  case 2:
  for(i = 0; i < n; i++)
sum += a[i];
 printf("Sum = %d", sum);
 break;

 case 3:
  {
int max = a[0];
for(i = 1; i < n; i++)
if(a[i] > max)
max = a[i];
 printf("Maximum = %d", max);
  break;
  }
 case 4:
      {
  int min = a[0];
 for(i = 1; i < n; i++)
 if(a[i] < min)
 min = a[i];
printf("Minimum = %d", min);
  break;
      }
 default:
 printf("Invalid Choice");
    }
 return 0;
}