#include <stdio.h>
int main()
{
    int digit;
    int count = 0;

    printf("Enter a digit\n");
    scanf("%d", &digit);

    int temp = digit;

    if (digit == 0) {
        count = 1;
    } else {
        while (digit != 0) {
            digit = digit / 10;
            count++;
        }
    }

    printf("%d has %d digits\n", temp, count);

    return 0;
}
