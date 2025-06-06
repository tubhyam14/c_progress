#include <stdio.h>
#include <math.h>
int main()
{
    long long binary;
    int flag = 1, i = 0, result = 0;
    printf("Enter a binary number:\n");
    scanf("%lld", &binary);

    while (flag)
    {

        int temp = binary % 10;
        binary = binary / 10;
        result = result + (temp * pow(2, i));
        if (binary == 0)
        {
            break;
        }

        

        i++;
    }

    printf("the value is %d", result);

    return 0;
}