#include <stdio.h>
#include<math.h>

int main()
{
   int N,a[100],i,j,s=0;
   scanf("%d",&N);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
   }
   
      for(i=0;i<N;i++)
   {
       
      for(j=i+1;j<N;j++)
   {
      if(a[i]<a[j])
      s++;
      }
   
   }
   printf("%d",s);
    return 0;
}
