#include <stdio.h>
int main() 
{
    int N,a[1000],i,j,s,x;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(i=0;i<N;i++)
    {
        for(j=i;j<N;j++)
        {
        if(a[i]>a[j])
    {
        s=a[i];
        a[i]=a[j];
        a[j]=s;
    }}}
    if(N%2==0)
{
x=(a[N-1/2]+(a[N/2]))/2;
}
else
{
x=a[N/2];
}
printf("%d",x);

return 0;
}
