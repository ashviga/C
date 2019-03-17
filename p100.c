#include <stdio.h>
 
int main()
{
    long int n, bin= 0, base = 1, s;
 
   
    scanf("%ld", &n);
    while (n != 0)
    {
        s = n % 10;
        bin= bin+ s* base;
        base = base * 2;
       n= n / 10;
    }
    printf(" %lX",bin);
    return 0;
}
