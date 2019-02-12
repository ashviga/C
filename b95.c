#include <stdio.h>

int main()
{
    float p, r, t, simple_interest;

    printf("Enter the principle :");
    scanf("%f", &p);
    printf("Enter the rate :");
    scanf("%f", &r);
    printf("Enter the time :");
    scanf("%f", &t);

    simple_interest = p * r * t / 100;

    printf("Simple interest is %0.2f", simple_interest);

    return 0;
}
