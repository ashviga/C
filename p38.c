#include <stdio.h>

int main()
{
    int a,i;
    scanf("%d",&a);
    for(i=2;i<=a;i++)
    {
        if(a%i==0)
        {
            if(i%2==0)
            printf("%d ",i);
        }
    }
    return 0;
}
