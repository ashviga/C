#include<stdio.h>
	int main()
	{
	char c[100];
	int i,count=0;
	gets(c);
	for(i=0;c[i]!='\0';i++)
	{
	if(c[i]==' ')
	{
	count++;
	}
	}
	printf("%d",count);
	return 0;
	}
