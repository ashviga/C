#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("enter the number:");
   
    scanf("%d %d %d",&a,&b,&c);
     d=a*b%c;
    printf("sum is %d",d);

    return 0;
}
