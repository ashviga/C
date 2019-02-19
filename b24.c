#include <stdio.h>
int main() 
{
    int s,a[1000],i,j,t;
    scanf("%d",&s);
    for(i=0;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<s;i++)
    {
        for(j=i;j<s;j++)
        {
        if(a[i]>a[j])
    {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
    }}}
    for(i=0;i<s;i++)
    {
        printf("%d ",a[i]);
    }
return 0;
}
