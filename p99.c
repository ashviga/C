#include <stdio.h>

int main()
{
    long N,r,s=1,bin=0;
   scanf("%ld",&N);
   
   while(N)
   {
       
       r=N%10;
       N=N/10;
       bin=bin+(r*s);
      s=s*2;
      
   }
   printf("%ld",bin);
    return 0;
}
