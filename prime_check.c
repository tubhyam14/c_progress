#include <stdio.h>
int main()
{
    int n = 0, count = 0;
    printf("Enter a number:\n");
    scanf(" %d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            count++;
        else
            continue;
    }

    if (count == 2)
    {
        printf("Number is a prime\n");
    }
    else
        printf("Number is not prime\n");

    return 0;
}