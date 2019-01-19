#include <stdio.h>

int main(void) {
  char c;
printf("Enter the character:");
scanf("%c",&c);
if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
{
  printf("%c is alphabet",c);
}
else
{
  printf("%c is not a constant",c);
}
  return 0;
}
