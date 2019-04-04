#include<stdio.h>

int main() {
  int a[100],n,i,j,p=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
    
  for(i=0;i<n;i++)
  {
    p=0;
    for(j=0;j<n;j++)
    {
      if(a[i]==a[j])
      {
       p++;
      }
    }
    if(p==1)
    {
      printf("%d\t",a[i]);
    }
  }
  return 0;
}
