#include <stdio.h>
int main() {
    int n=0;
    printf("Enter a number\n");
    scanf(" %d",&n);

    for (int i=1; i<=10;i++){
        printf("%2d X %2d = %2d\n",n,i,n*i);
    }




return 0;
}