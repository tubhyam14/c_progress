#include <stdio.h>
int main()
{
    int digit = 0;
    int flag = 1;
    int count = 0;
    printf("Enter a digit\n");
    scanf(" %d", &digit);
    int temp = digit;

    while (flag)
    {
        digit = digit / 10;
        count++;
        if (digit == 0)
        {
            count = 1;
        }
        if (digit == 0)
            break;
    }

    printf("%d has %d digits\n", temp, count);

    return 0;
}