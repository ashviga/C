#include <stdio.h>

int main()
{
  int N,K,i,e=1,c,d=1;
  scanf("%d %d",&N,&K);
  c=N-K;
  for(i=1;i<=N;i++)
  {
      e=e*i;
  }
    for(i=1;i<=c;i++)
  {
      d=d*i;
  }


  printf("%d",(e/(d)));
  
    return 0;
}
