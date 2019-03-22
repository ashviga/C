#include <stdio.h>

int main()
{
    int N,i,c=0;
    scanf("%d",&N);
    int a[N];
    
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=1;i<N;i++)
    {
        c=c+a[i];
	}
	printf("%d",c);
    return 0;
}
