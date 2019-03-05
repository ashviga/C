#include <stdio.h>
int main()
{
    int N1,N2,i,j,k,s=0;
 scanf("%d %d",&N1,&N2);
 for(i=N1;i<=N2;i++)
 {
  for(j=1;j<=i/2;j++)
  {
   k=j*j;
   if(k==i)
   {
    s++;
   }
  }
 }
 printf("%d",s);
    return 0;
}
