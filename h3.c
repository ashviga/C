#include<stdio.h>
#include<string.h>

int main() {
  int a[100],n,i,j,p=0;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]==i)
    {
      printf("%d",a[i]);
    }
    else
    {
      p++;
    }
  }
  if(p>=n)
  {
    printf("-1");
  }
  return 0;
}
