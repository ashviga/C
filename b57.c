#include <stdio.h>
	
	int main()
	{
	    int n,m,count=0,s[50],i;
	    scanf("%d%d",&n,&m);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&s[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(s[i]==m)
	        {
	            count++;
	        }
	    }
	    printf("%d",count);
	    return 0;
	}
