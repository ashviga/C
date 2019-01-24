#include <stdio.h>
#include <string.h>
 
int main()
{
  int n,i,j,m,p,a[50];
  {
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
    }
    scanf("%d",&m);
     
  for(i=0;i<n;i++)
{
  m=a[0];
  for(j=0;j<i;j++)
{
  if(m<a[j])
  {
    m=a[j];
    p=j;
  }
}
a[p]=0;
}
printf("%d",m);
  }
  return 0;
}

  
