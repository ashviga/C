#include <stdio.h>
 
int main(void) 
{
	char a[50];
	scanf("%s",a);
	if(a[0]=='S' || a[0]=='s')
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
