#include <stdio.h>
int main(void) 
{
    int a,b,s,fact=1,fact1=1,i,j;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++)
	{
	    fact=fact*i;
	}
	for(j=1;j<=b;j++)
	{
	   fact1=fact1*j;
	}
	s=fact/fact1;
	printf("%d",s);
	return 0;
}
