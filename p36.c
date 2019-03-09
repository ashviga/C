#include <stdio.h>
#include <math.h>

int main()
{
int a,K;
	scanf("%d %d",&a,&K);
	int i,X,l=0;
	while(a>0)
	{
		X=a%10;
		if(X==K)
		{
			l+=1;
		}
		a=a/10;
	}
	printf("%d",l);
	return 0;
}
