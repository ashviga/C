#include<stdio.h>
	
	int main()
	{
	   int a,r,i;
	   scanf("%d",&a);
	   r=a%10;
	   a=a-r;a=a+10;
	   printf("%d",a);
	    return 0;
	}
