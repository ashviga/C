#include <stdio.h>

int main(void) {
  int a[100],sum=0,i,n,x,p=0,j;
  scanf("%d %d",&n,&x);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
      }
      for(i=0;i<n;i++)
      {
        for(j=1;j<n;j++)
        {
       if(a[i]+a[j]==x)
       {
         p++;
       }
      }
      }
      if(p>0)
      {
        printf("yes");
      }
      else
      {
printf("no");
      }
      
  return 0;
}
