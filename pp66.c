#include <stdio.h>

int main()
{
   int N,K,a[1000],i,j,s=0;
   scanf("%d %d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }

 for(i=0;i<N;i++)
   {
       s=0;
       for(j=i+1;j<N;j++)
       {
         
           if(a[i]==a[j])
        {
            s++;
            }}
       if(s==K-1)
       
       {
            printf("%d",a[i]);
       }
   }

    return 0;
}
