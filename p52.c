#include <stdio.h>

int main()
{
 int s,i,j,min,t,K;
 scanf("%d %d",&s,&K);
 int a[s];
 for(i=0;i<s;i++)
 {
     scanf("%d",&a[i]);
 }
 K=s+1-K;
for(j=0;j<K;j++)
{min=0;
     for(i=0;i<s;i++)
     {
         if(a[i]>min)
         {
             min=a[i];
             t=i;
         }
     }
 
    a[t]=0;
}
 printf("%d",min);


    return 0;
}
