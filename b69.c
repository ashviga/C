#include<stdio.h>
	#include <string.h>
	

	void main()
	{
	int a,b,s;
	scanf("%d %d",&a,&b);
	if(a>b)
	{
	diff=a-b;
	}
	else
	{
	    s=b-a;
	}
	if(s%2==0)
	{
	    printf("even");
	}
	else
	{
	    printf("odd");
	}
	return 0;
	}
