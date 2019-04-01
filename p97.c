#include <stdio.h>

int main()
{
    int l,r,p=0,i;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {
        if(i%2!=0)
        {
            p+=i;
        }
    }
    printf("%d",p);


    return 0;
}
