#include <stdio.h>

int main()
{
    int c,i,j;
	scanf("%d",&c);
	int a[c];

	for(i=0;i<c;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<c;i++)
	{
		for(int j=i+1;j<c;j++)
		{
			if(a[i]==a[j])
			{
				a[j]='*';
			}
		}
	}
	for(i=0;i<c;i++)
	{
		if(a[i]!='*')
		printf("%d ",a[i]);
	}
    return 0;
}
