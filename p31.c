#include <stdio.h>

int main(void) 
{
	char str[20];
	int i,n1=0,n2=0;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
			n1=n1+1;
		}
		else if(str[i]==')')
		{
			n2=n2+1;
		}
	}
	if(n1==n2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
