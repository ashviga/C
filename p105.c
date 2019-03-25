#include <stdio.h>
int main()
{
int n,a[100],i,t;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
for(i=n-1;i>=0;i--)
{
  printf("%d ",i+1);

}
return 0;

}
