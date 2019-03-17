#include <stdio.h>

int main()
{
    int N,r,sum=0,p=0;
	scanf("%d",&N);
	while(N>0)
	{
		if(N<10)
		{
			r=N%10;
			sum+=r;
			break;
		}
		if(p==0)
		{
		r=N%10;
		sum+=r;
		N=N/10;
		p=1;
		}
		else
		{
		N=N/10;	
		}
		
		
	}
	printf("%d",sum);

    return 0;
}
