#include <stdio.h>
#include<math.h>

int main()
{
    	int N,p=0;
	scanf("%d",&N);
	int i;
	for(i=2;i<N;i++)
	{
		if(N%i==0)
		{
		    p=1;
			break;
		}
	
	}
	if(p==0)
	{
		printf("no");
	}
	else
	{
	    printf("yes");
	}

    return 0;
}
