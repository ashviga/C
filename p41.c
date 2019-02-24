#include<stdio.h>
void main()
{
    int N,K,i,f=1,c=0;
    scanf("%d%d",&N,&K);
    for(i=1;i<=N;i++)
    {
       f=f*K;
        if(f==N)
        {
            c++;
            break;
        }
        
     }
        if(c==0)
        printf("no");
        else printf("yes");
        
    
}
