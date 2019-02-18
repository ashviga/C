#include <stdio.h>

int main()
{
   int N, R, P;
 
  	
  	scanf("%d", & N);
  	 	
  	for(P = 1; N> 0; N = N/ 10)
  	{
  		R = N % 10;
		P = P * R;
	}
  
	printf("%d", P);

    return 0;
}
