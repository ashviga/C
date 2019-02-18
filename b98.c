#include <stdio.h>
 
int main() 
{
	int n,a[60],i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		if(i!=a[i])
		{
			printf("\n%d",i-1);
			break;
		}
	}
 
	return 0;
}
