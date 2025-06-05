#include <stdio.h>
#include <math.h>
int main()
{
    float principal = 0, rate = 0, amount = 0, intrest = 0;
    int time = 0, n = 1;
    // a=p(1+r/n)^nt
    printf("Enter the Principal amount:\n");
    scanf(" %f", &principal);

    printf("Enter time\n");
    scanf(" %d", &time);

    printf("Eneter Rate of Intrest\n");
    scanf(" %f", &rate);
    rate=rate/100;

    amount = principal *pow( (1 + (rate / n)), time);
    intrest = amount - principal;

    printf("The Amount is: %.2f\n", amount);
    printf("The Intrest is: %.2f", intrest);

    return 0;
}