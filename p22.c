#include <stdio.h>
int main()
{
	int n,k,m,j;
	scanf("%d %d",&n,&k);
	if(n>k)
	{
	    m=n;
	}
	else
	{
	    m=k;
	}
    for(j=m;j>=2;j--)
    {
        if(n%j==0 && k%j==0)
        {
            printf("%d",j);
            break;
        }
    }
	return 0;
}
