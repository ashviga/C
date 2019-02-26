#include <stdio.h>
#include<string.h>
int main(void) {
	char a[15],b[15];
	int m,n,i,p;
	scanf("%s %s",a,b);
	n=strlen(a);
	m=strlen(b);
	if(n==m)
	{
	for(i=0;i<n;i++)
	{
		if(a[i]==b[i])
		{
			p=1;
		}
		else
		{
			p=0;
			printf("No");
			break;
		}
	}
	}
	if(p==1)
	printf("yes");
	return 0;
}
