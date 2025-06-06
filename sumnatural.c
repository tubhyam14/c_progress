#include <stdio.h>
int main() {
    int limit=0,sum=0;
    printf("Enter lmit\n");
    scanf("%d",&limit);
  
    for(int i=1;i<=limit;i++){
        sum=sum+i;
    }


   printf("The sum of nautral number till %d is %d\n",limit,sum);
return 0;
}