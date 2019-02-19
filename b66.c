#include <stdio.h>

int main()
{
    int a,i,f=0;
    scanf("%d",&a);
    for(i=1;i<a/2;i++)
    {
        if(a%i==0)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
return 0;
}
