#include <stdio.h>

int main()
{
  long N,r,base=1,s=0;
   scanf("%ld",&N);
   
   while(N)
   {
       
       r=N%2;
       N=N/2;
       s=s+(r*base);
      base=base*10;
      
   }
   printf("%ld",s);
    return 0;
}
