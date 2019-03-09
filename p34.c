#include <stdio.h>
#include<string.h>

int main()
{
  int l,i;
  char ch[100];
  scanf("%s",ch);
  l=strlen(ch);
 
   for(i=0;i<l;i=i+3)
   {
     printf("%c",ch[i]);  
   }
   

return 0;  
  
}
