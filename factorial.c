#include <stdio.h>
int main() {
    int num=0;
    unsigned long long fact=1;
    printf("Enter a number\n");
    scanf("%d",&num);

    for(int i=1;i<=num;i++){
            fact=fact*i;
    }
    printf("The factorial of %d is %llu\n",num,fact);



return 0;
}