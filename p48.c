#include <stdio.h>
#include<math.h>

int main()
{

int a,i;
scanf("%d",&a);
for(i=1;i<=a;i++)
{
    if(a%i==0)
    {
        if(i%2!=0)
        printf("%d ",i);
    }
}

    return 0;
}
