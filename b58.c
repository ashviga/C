#include <stdio.h>
	
	int main()
	{
	    int n,k,s=0,a[50],i;
	    scanf("%d%d",&n,&k);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==k)
	        {
	            s++;
	        }
	    }
	    if(s>0)
	    {
	    printf("yes");
	    }
	    else
	    {
	        printf("no");
	    }
	    return 0;
	}
