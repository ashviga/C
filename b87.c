#include <stdio.h>

int main()
{
    int m1, m2, i, gcd;

   
    scanf("%d %d", &m1, &m2);

    for(i=1; i <= m1 && i <= m2; ++i)
    {
        
        if(m1%i==0 && m2%i==0)
            gcd = i;
    }

    printf("%d",gcd);

    return 0;
}
