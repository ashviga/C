#include <stdio.h>

int main()
{
    int N,t,i,c=0;
	scanf("%d",&N);
	int a[N];

	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<N-1;i++)
	{
		c=c+(a[i]+a[i+1]);
	}
	printf("%d",c);
    return 0;
}
