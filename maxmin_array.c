#include <stdio.h>
int main()
{
    int n = 0;
    printf("Enter the Number of element you want in a array\n");
    scanf(" %d", &n);

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter #%d value in array\n", i + 1);
        scanf(" %d", &arr[i]);
    }
    int max = arr[0];
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        else
            continue;
    }

    for (int i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
        else
            continue;
    }

    printf("%d is the max number\n", max);
    printf("%d is the min number\n", min);

    return 0;
}