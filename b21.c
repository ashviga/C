#include <stdio.h>
#include<math.h>
int main()
{
    int N,A,C,total=0,x,i;
    scanf("%d %d %d",&N,&A,&C);
    
total = (N * (2 * A + (N - 1) * C)) / 2;
    x = A+ (N- 1) * C;
            printf("%d", total);

return 0;
}
