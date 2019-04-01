#include <stdio.h>

int main()
{
  int N,i,p=1,j;
    scanf("%d ",&N);
   int a[100];
	for(i=0;i<N;i++)
	{
		scanf("%d",&a[i]);
	}
		for(i=0;i<N;i++)
	{
		if(a[i+1]>a[i])
		{
			p=p+1;
		}
		else
		{
			break;
		}
	}
	printf("%d",c);
    return 0;
}
