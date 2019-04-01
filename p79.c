#include <stdio.h>

int main()
{
    int N,M,a[1000],i,j,l,f;
   scanf("%d",&N);
 for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<N;i++)
	{
	for(j=0;j<N;j++)
	{
       M=a[j]-a[i];
		f=a[i]-a[j];
		if(M>l)
		{
			l=M;
		}
		if(f>l)
		{
			l=f;
		}
	}
	}
	printf("%d",l);
    return 0;
}
