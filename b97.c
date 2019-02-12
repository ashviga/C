#include <stdio.h>
int main()
{
    int n, sum= 0, r;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while(n != 0)
    {
        r = n%10;
        sum = sum*10 + r;
        n =n/10;
    }

    printf(" %d", sum);

    return 0;
}
