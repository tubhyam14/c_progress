#include <stdio.h>
int main() {
    int a,b,temp;
    printf("Enter the value of x\n");
    scanf(" %d",&a);

    printf("Enter the value of y\n");
    scanf(" %d",&b);
    
    temp=a;
    a=b;
    b=temp;

    printf("After swaping the value of x is %d and y is %d\n",a,b);
return 0;
}