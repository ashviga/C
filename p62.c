#include <stdio.h>

int main()
{
  int a,i,r;
    scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
      r=a%i;
      
      if((a/i)%2!=0&&r==0)
      {
          printf("%d",i);
          break;
      }
      
  }
   
  
}
