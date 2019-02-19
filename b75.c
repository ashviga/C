#include <stdio.h>
	
	int main()
	{
	   char c[100],i,j,n;
	   scanf("%s",c);
	   for(i=0;c[i]!='\0';i++);
	   j=i/2;
	   c[j]='*';
	   printf("%s",c);
	    return 0;
	}
