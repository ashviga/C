#include <stdio.h>

int main()
{
    char S[1000];
   int n,l,i;
   gets(S);
   scanf("%d",&n);
   l=strlen(S);
   
for(i=l;i>n;i--)
{
    
    
    printf("%c",S[i]);
}

   
    return 0;
}
