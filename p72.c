#include <stdio.h>

int main()
{
   int N,a[100000],i,s;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
     if(a[i]>a[i+1])
        s=a[i];
    
       
     
   }
    printf("%d ",s);
    return 0;
}
