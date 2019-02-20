#include <stdio.h>
#include <string.h>
int main()
{
  char c[100];
  int k,i;
  printf("enter the string");
  scanf("%s",c);
  printf("enter the number");
  scanf("%d",&k);
  for(i=0;i<k;i++)
  {
    printf("%s",c);
  }
  return 0;
  }
