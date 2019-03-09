#include <stdio.h>

int main()
{
    
     int a[100000],Num,i,p;
    scanf("%d",&Num);
    for(i=0;i<Num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<Num;i++)
    {
        if(a[i]==0)
        {
           p =i;
        }
    }
    for(i=0;i<p;i++)
    {
        if(a[i]!=0)
        {
        printf("%d ",a[i]);
        }
    }
    return 0;
}
