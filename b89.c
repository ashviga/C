#include <stdio.h>
#include<string.h>
int main()
{
  
  char S[100],n;
   int i,j,l;
   scanf("%s",S);
   l=strlen(S);
  
   for(i=0;i<l-1;i++)
   {
       for(j=i+1;j<l;j++)
       {
        if(S[i]>S[j])
        {
            n=S[i];
            S[i]=S[j];
            S[j]=n;
        }
       }
   }
   printf("%s",S);
    

	return 0;
}
