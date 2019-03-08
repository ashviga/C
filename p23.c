#include <stdio.h>

int main()
{
    int N,K,i,j,b,p=0;
scanf("%d %d",&N,&K);
int a[N+K];
for(i=0;i<N;i++)
{
     scanf("%d",&a[i]);
}
 
  for(i=N;i<N+K;i++)
{
  
    scanf("%d",&a[i]);
   p++;
      b=a[0];
   for(j=1;j<N+l;j++)
{
  if(b<a[j])
   b=a[j];
 }

printf("%d ",b);

}
return 0;
}
