#include<stdio.h>

int main()
{
    int n,s[100],i;
    
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    for(i=0;i<n-1;i++)
    {
        if(s[i]>s[i+1])
        {
            printf("%d ",s[i]);
        }
        else
        {
            printf("%d ",s[i+1]);
        }
    }
    return 0;
}
