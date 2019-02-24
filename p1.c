#include <stdio.h>
#include <string.h>
 
int main()
{
   char s[100000];
   int i,c=0;

   scanf("%s",s);
   c=strlen(s);
   for(i=c;i>=0;i--)
   {
       printf("%c",s[i]);
   }
 
   
 
   return 0 ;
}
