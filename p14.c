#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[30];
	int i,m;
	scanf("%s",a);
	m=strlen(a);
	for(i=0;i<m;i++)
	{
		if(a[i]=='a' ||a[i]=='e' ||a[i]=='i' ||a[i]=='o' ||a[i]=='u' ||a[i]=='A' ||a[i]=='E' ||a[i]=='I' ||a[i]=='O' ||a[i]=='U')
		{
			a[i]='+';
		}
	}
	for(i=m;i>=0;i--)
	{
		if(a[i]!='+')
		{
			printf("%c",a[i]);
		}
	}
 
	return 0;
}
