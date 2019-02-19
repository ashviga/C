#include <stdio.h>
#include<math.h>
int main()
{
    int number,i,a[10000],s=0;
    scanf("%d",&number);
    
    for(i=0;i<number;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<number;i++)
    {
        if(a[i]>s)
        {
            s=a[i];
        }
    }
    printf("%d",s);
    return 0;
}
