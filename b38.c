#include <stdio.h>
int main()
{
int n,b,s;
scanf("%d %d",&n,&b);
    n=n^b;
    b=n^b;
    n=n^b;
    printf("%d %d",n,b);
return 0;
}
