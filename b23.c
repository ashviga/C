#include <stdio.h>
#include<math.h>
int main()
{
    int number,i,s[10000],min;
    scanf("%d",&number);
    
    for(i=0;i<number;i++)
    {
        scanf("%d",&s[i]);
    }
    min=s[0];
    for(i=0;i<number;i++)
    {
        if(s[i]<min)
        {
            min=s[i];
        }
    }
    printf("%d",min);
    return 0;
}
