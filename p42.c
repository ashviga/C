#include <stdio.h>

int main()
{
    int N,K,i,p=0;
	scanf("%d",&N);
	int a[N];

	for(i=0;i<N;i++)
	{
	    scanf("%d",&a[i]);
	}
for(i=0;i<N;i++)
{
    
    if(a[i]<a[i+1])
    {
       p=1;
       break;
        
     }
}if(p==0)
	printf("no");
	else
		printf("yes");
    return 0;
}
