#include <stdio.h>

int main()
{
    int c;
	scanf("%d",&c);
	int a[c],i,sum;
	for(i=0;i<c;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<c;i++)
	{
		 sum=0;
		for(int j=0;j<i+1;j++)
		{
			sum=sum+a[j];	
		}
		printf("%d ",sum);
	}
    return 0;
}
