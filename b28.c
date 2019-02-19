#include <stdio.h>
int main() 
{
    int n,i,s[10000];
    
scanf("%d",&n);

for(i=0;i<n;i++)
{
    scanf("%d",&s[i]);
}
for(i=0;i<n;i++)
{
    printf("%d %d \n",s[i],i);
}
    
return 0;
}
