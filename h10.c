#include <stdio.h>

int main(void) {
  int a[100],b[100],i,j,n,m,p=0,k;
  scanf("%d\t%d",&n,&m);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<m;i++)
  {
    scanf("%d",&b[i]);
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
    {
     if(a[i]==b[j])
     {
      p++;
     }
    }
  }
     if(p==m)
     {
       printf("yes");
     }
     else
     {
       printf("no");
       }
       return 0;
}
