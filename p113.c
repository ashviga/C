#include <stdio.h>
#include<string.h>
int main()
{
	char c[20];
	scanf("%s",c);
	int len,flag;
	len=strlen(c);
	if(c[0]<'4' && c[1]<'10' && c[2]=='/' && c[3]<'2' && c[4]<'3' && c[5]=='/' && c[6]<'10' && c[7]<'10' && c[8]<'10' && c[9]<'10')
	{
		flag=1;
	}
	else
	{
		flag=0;
		
	}
	if(flag==0)
	{
		printf("no");
	}
	if(flag==1)
	{
		printf("yes");
	}
	
	return 0;
}
