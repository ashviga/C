#include <stdio.h>

int main()
{
  long N,r,base=1,s=0;
   scanf("%ld",&N);
   
   while(N)
   {
       
       r=N%10;
       N=N/10;
       s=s+(r*base);
      base=base*2;
      
   }
   printf("%ld",s);
    return 0;
}
