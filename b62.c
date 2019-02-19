#include<stdio.h>
	#include <string.h>
	

	int main(void) {
	  char s[100];
		int n,i,num,c=0;
		scanf("%s",s);
		n=strlen(s);
		for(i=0;i<n;i++)
		{
		    if(s[i]=='0'||s[i]=='1')
		    {   
		        c++;
		    }
		    else
		    {
		       printf("no");
		       break;
		    }
		}
		if(n==c)
		{
		     printf("yes");
		}
		return 0;
	}
