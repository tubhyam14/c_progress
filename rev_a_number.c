#include <stdio.h>


int main()
{

    int n = 0;

    printf("Enter a number\n");
    scanf(" %d", &n);

    int temp = n;

    if (temp == 0)
    {
        printf("0");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d", temp % 10);
            temp /= 10;
        }
    }

    return 0;
}