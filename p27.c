#include <stdio.h>

int main(void) 
{
	char a[20];
	scanf("%s",a);
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>96)
		{
			a[i]=a[i]-32;
		}
		else if(a[i]<91)
		{
			a[i]=a[i]+32;
		}
	}
	printf("%s",a);
		
		
		return 0;
}
