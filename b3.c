#include <stdio.h>

int main(void) {
  char ch;
int lower,upper;
printf("Enter the alphabet:");
scanf("%c",&ch);
lower=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
upper=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
if(lower||upper)
{
  printf("%c is vowel",ch);

}
else
{
  printf("%c is constant",ch);
}
  return 0;
}
