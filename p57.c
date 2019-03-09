#include <stdio.h>
#include<string.h>
int main() 
{
	char ch[10];
	char k;
	int n,i,count=0;
	scanf("%s %c",ch,&k);
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
	    if(ch[i]==k)
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
