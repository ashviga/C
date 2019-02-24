#include <stdio.h>
#include <string.h>
 
int main()
{
   char S[100000];
   int n=0;

   scanf("%s",S);
   n=strlen(S);
   S[n]='.';
   printf("%s",S);
   
 
   return 0 ;
}
