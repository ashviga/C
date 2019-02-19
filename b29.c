#include <stdio.h>
int main() 
{
    int a,hours,minutes;
    
scanf("%d",&a);
hours = a / 60;
 minutes = a % 60;
	
	printf("%d %d",hours,minutes);
  return 0;
}
