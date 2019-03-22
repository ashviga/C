#include<stdio.h>
int main(void)
{
  int a[1000],i,j,n,k,s;
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
 
  for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                s=a[i];
                a[i]=a[j];
                a[j]=s;
            }
           
        } 
    }
       for(i=0;i<n;i++)
       {
         printf("%d",a[i]);
       }
    
  return 0;
}
