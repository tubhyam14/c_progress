#include <stdio.h>
int main()
{
    int num1 = 0, num2 = 0, num3 = 0;
    printf("Enter Number #1\n");
    scanf(" %d", &num1);
    printf("Enter Number #2\n");
    scanf(" %d", &num2);
    printf("Enter Number #3\n");
    scanf(" %d", &num3);

    if (num1 > num2 && num1 > num3)
    {
        printf("%d is the greatest\n", num1);
    }

    else if (num2 > num1 && num2 > num3)
    {
        printf("%d is the greatest\n", num2);
    }
    else
        printf("%d is the greatest\n", num3);

    return 0;
}