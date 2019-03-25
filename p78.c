#include <stdio.h>
#include<math.h>
int main()
{
   int N,M,a[100],b[100],c[100],i,j,k=0,p;
   scanf("%d %d",&N,&M);
   for(i=0;i<N;i++)
   {
       scanf("%d",&a[i]);
       c[k]=a[i];
       k++;
   }
   for(i=0;i<M;i++)
   {
       scanf("%d",&b[i]);
       c[k]=b[i];
       k++;
   }
   for(i=0;i<k;i++)
   {
    for(j=i+1;j<k;j++)
   {
   if(c[i]>c[j])
   {
       
       p=c[i];
       c[i]=c[j];
       c[j]=p;
       }}}
     for(i=0;i<k;i++)
   {
       printf("%d ",c[i]);
   }
    return 0;
}
