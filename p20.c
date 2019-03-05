#include <stdio.h>
#include<string.h>

int main()
{
       char ch[100000];
int i;
gets(ch);

for(i=0;ch[i]!='\0';i++)
{
  
  if(ch[i]=='Z' )
  printf("C");
  else if(ch[i]=='Y')
  printf("B");
  else if(ch[i]=='X')
  printf("A");
  else
    
  printf("%c",ch[i]+3);
    

    
    
}
    return 0;
}
