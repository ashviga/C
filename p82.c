#include <stdio.h>

int main(void){
	int n,p=0;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		p=p&a[i];
	}
	printf("%d",p);
	

	return 0;
}
