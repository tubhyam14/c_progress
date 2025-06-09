#include <stdio.h>
int main()
{

    int limit = 0, count = 0;
    printf("Enter the limit\n");
    scanf(" %d", &limit);

    int i = 2;
    int j = 1;

    while (limit)
    {
        count = 0;
        for (int k = 1; k <= i; k++)
        {
            if (i % k == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d\n", i);
            limit--;
        }
        i++;
    }

    return 0;
}