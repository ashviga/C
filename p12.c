#include <stdio.h>


int main()
{
       int n,k;
   scanf("%d %d",&n,&k);
   int M[n],i,s,j;
   if((n>=1&&n<=1000)&&(k>=1&&k<=1000))
   {
   for(i=0;i<n;i++)
   {
       
       scanf("%d",&M[i]);
   }
   
      for(j=1;j<=k;j++)
 {
    s=M[n-1];
     for(i=n-1;i>0;i--)
   {
     
     M[i]=M[i-1];
     }
  
   M[0]=s;
   }
  
    for(i=0;i<n;i++)
   {
       
       printf("%d ",M[i]);
   }
   
   }


    return 0;
}
