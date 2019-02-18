#include <stdio.h>

int main(void) 
{
	int m,k,i,s=1;
	scanf("%d %d",&m,&k);
	for(i=1;i<=k;i++)
	{
		s=s*m;	
	}
	printf("%d",s);
	return 0;
}
