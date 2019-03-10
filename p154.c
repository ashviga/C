#include <stdio.h>

int main(void) {
	char c[10];
	scanf("%s",c);
	int k;
	scanf("%d",&k);
	int i,u,v;
	int count=0,flag=1;
	for(i=k-1;c[i]!='\0';i=i+k)
	{
		 u=a[i];
		 v=u+32;
		c[i]=v;
	}
	printf("%s",c);
	return 0;
}
