#include <stdio.h>
int main() {

    int n=0;
    printf("Enter a number\n");
    scanf(" %d",&n);

    if (n==0)printf("Is a Palindrome");
    int temp=0;
    int temp2=n;
    int pdn=0;
    while(temp2!=0){
        temp=temp2%10;
        pdn=pdn*10+temp;
        temp2=temp2/10;

        
    }
    if (n==pdn){
        printf("Is a palindrome\n");

    }
    else printf("Not a palondrome\n");

return 0;
}