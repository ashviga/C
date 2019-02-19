#include <stdio.h>

int main() {
	char c[10000];
	int b,i;
	scanf("%s",c);
	for(i=0;c[i]!='\0';i++)
	{
		
		b=c[i];
		if(b%2!=0)
		{
			printf("%c ",c[i]);	
		}
	}
	return 0;
}
