#include <stdio.h>

int main(void) {
  long a;
  int count=0;
  printf("Enter the number:");
  scanf("%ld",&a);
  while(a!=0)
  {
    a=a/10;
    count++;
  }
  printf("%d",count);
  return 0;
}
