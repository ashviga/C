#include <stdio.h>

int main(void)
{
  int a,i,sum=0;

  printf("Enter the number:");
  scanf("%d",&a);
  for(i=1;i<=a;i++)
  {
    sum=sum+i;
  }
    printf("sum of %d natural number is %d\n",a,sum);
  

  return 0;
}
