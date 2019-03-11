#include <stdio.h>

int main()
{
  int N,K,i,a=1,c,b=1,d=1;
  scanf("%d %d",&N,&K);
  c=N-K;
  for(i=1;i<=N;i++)
  {
      a=a*i;
  }
    for(i=1;i<=c;i++)
  {
      b=b*i;
  }
      for(i=1;i<=K;i++)
  {
      d=d*i;
  }
  
  

  printf("%d",(a/(b*d)));
  
    return 0;
}
