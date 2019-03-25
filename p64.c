#include <stdio.h>

int main(void) 
{
  int N,K,b[100],i;
   scanf("%d %d",&N,&K);
   for(i=0;i<N;i++)
   {
       scanf("%d",&b[i]);
   }
   
      for(i=0;i<N;i++)
   {
       
if(b[i]<K)

   {
       
    printf("%d ",b[i]);
   }
   }
    return 0;
   }
