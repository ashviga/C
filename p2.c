#include <stdio.h>

int main()
{
 int N,s=1,i;
 scanf("%d",&N);
 if(N<=20)
 {
 
 for(i=1;i<=N;i++)
 {
    s=s*i;
 }
 printf("%d",s);
}
    return 0;
}
