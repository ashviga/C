#include <stdio.h>
 
int main() 
{
     int A, B, C, i, n;
     int s = 0,p=0;
 
     scanf("%d %d %d", &A,&B,&C);
    
    
     s = (C * (2 * A+ (C - 1)* B ))/ 2;
     n= A + (C - 1) * B;
     for (i = A; i <= n; i = i + B)
     {
p=1;
}
if(p==1)
               printf("%d ", s);
     

	return 0;
}
