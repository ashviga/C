#include <stdio.h>

int main()
{
  int N,K,i,p=0;
  scanf("%d%d",&N,&K);
  int a[N];
  for(i=0;i<N;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<N;i++)
  {
      if(a[i]==K)
      {
          p=1;
      }
  }
  if(p==1)
  printf("Yes");
  else
  printf("No");
return 0;  
  
}
