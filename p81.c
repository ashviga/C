#include <stdio.h>

int main(void){
	int a,j,p,;
	scanf("%d",&a);
	int a[a];
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<a;i++)
	{
		for(j=i+1;j<a;j++)
		{
			p=(a[i])&(a[j]);
			if(p>max)
			{
				max=p;
			}
		}
	}
	printf("%d",max);
	

	return 0;
}
