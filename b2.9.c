#include <stdio.h>
int main()
{
    int a, i;
    unsigned long long factorial = 1;

    printf("Enter an integer: ");
    scanf("%d",&a);

    // show error if the user enters a negative integer
    if (a < 0)
        printf("Error");

    else
    {
        for(i=1; i<=a; ++i)
        {
            factorial *= i;              // factorial = factorial*i;
        }
        printf("Factorial of %d = %llu", a, factorial);
    }

    return 0;
}
