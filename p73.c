#include<stdio.h>

  int main(void)
  {
  int c[1000],N,K,i;
  scanf("%d %d",&N,&K);
  for(i=0;i<N;i++)
  {
    scanf("%d",&c[i]);
  
  }
  for(i=0;i<N;i++)

{
  if(c[i]==K)
  {

  printf("%d ",i+1);
  break;
  }

}

  return 0;


  }
