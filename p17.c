#include <stdio.h>

int main()
{
    int n,m,i;
scanf("%d %d",&n,&m);
if((n>=1&&n<=100000)&&(m>=1&&m<=100000))
{

for(i=1;;i++)
{
    if(i%n==0&&i%m==0)
    {
        
        printf("%d",i);
        break;
    }
    
}
}

    return 0;
}
