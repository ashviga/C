#include <stdio.h>

int main(void) {
int a[50],n,i,j;
printf("Enter the number:");
scanf("%d",&n);
for(i=0;i<n;i++)
{
  scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++)
{
for(j=i+1;j<=n;j++)
{
  if(a[i]==a[j])
  {
    printf("%d",a[i]);
    goto fun;
  }
}
  }
fun:  
   
  return 0;
}
