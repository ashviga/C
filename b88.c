#include <stdio.h>

int main()
{
   int m1, m2, min;
    
    scanf("%d %d", &m1, &m2);

    
    min = (m1>m2) ? m1 : m2;

    
    while(1)
    {
        if( min%m1==0 && min%m2==0 )
        {
            printf("%d",min);
            break;
        }
        ++min;
    }
    return 0;
}
