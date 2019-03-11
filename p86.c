#include <stdio.h>


int main(void){
	int a,temp=0;
	scanf("%d",&a);
	int a[a];
	int i;
	for(i=0;i<a;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<a;i++)
	{
		temp=temp^a[i];
	}
	printf("%d",temp);
	

	return 0;
}
