#include <stdio.h>
 

int main()
{
int n;
	int N,s=0,r,x;
	scanf("%d",&N);
	while(N>0)
	{
		r=N%10;
		x=r*r;
		s=s+x;
		N=N/10;
	}
	printf("%d",s);
    return 0;
}
