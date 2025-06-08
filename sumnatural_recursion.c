#include <stdio.h>

int nSum(int limit);


int main() {
    int limit=0,sum=0;
    printf("Enter lmit\n");
    scanf("%d",&limit);
  
    sum=nSum(limit);
    


   printf("The sum of nautral number till %d is %d\n",limit,sum);
return 0;
}

int nSum(int limit){

    if(limit==1)return 1;

    return limit+nSum(limit-1);

}