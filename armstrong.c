#include <stdio.h>
#include <math.h>
int main()
{

    int n = 0,count=0;
    printf("Enter a number\n");
    scanf("%d", &n);
    int org = n;
    while (org != 0) {
        count++;
        org /= 10;
    }


    int armno = 0;
    org = n;
    while (org != 0)
    {
        armno = armno + pow(org % 10, count);
        org = org / 10;
    }

    if (armno == n)
    {
        printf("It is Armstrong Number\n");
    }
    else
        printf("It is not Armstrong Number\n");
    return 0;
}