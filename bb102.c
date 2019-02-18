#include<stdio.h>
#include<string.h>
int main()
{
	int v;
	scanf("%d",&v);
	while(v%2==0)
	{
		v=v/2;
	}
	printf("%d",v);
	return(0);	
}
