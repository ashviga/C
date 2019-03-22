#include <stdio.h>

int main()
{
    int c;
	scanf("%d",&c);
	int a[c],i,j,sum;
	for(i=0;i<c;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<c;i++)
	{
		 sum=0;
		for(j=i;j<c;j++)
		{
			sum=sum+a[j];
		
		}
		printf("%d ",sum);
		}
	
    return 0;
}
