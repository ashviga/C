#include <stdio.h>
int main()
{
    int N,i,j,c,p=0;
    scanf("%d",&N);
    int a[N];
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {c=1;
        for(j=0;j<N;j++)
        {
            if(a[i]==a[j])
            {
             c++;   
            }
            if(a[i]!=a[j])
            {
                break;
            }
        }
        if(c>p)
  {
    p=c;
  }
    }
    	
    	printf("%d",p);
    	
    return 0;
}
