#include <stdio.h>
 
int main()
{
   int a, reverse = 0;
 
   printf("Enter a number to reverse\n");
   scanf("%d", &a);
 
   while (a != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + a%10;
      a       = a/10;
   }
 
   printf(" %d\n", reverse);
 
   return 0;
}
