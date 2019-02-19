#include<stdio.h>
	int main()
	{
	  char c[10];
	  int k,i;
	printf("enter the string and nth value");
	scanf("%s",c);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	printf("%c",c[i]);
	}
	return 0;
	}
