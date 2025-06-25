#include <stdio.h>
#include <stdlib.h>
#include<time.h>
int main() {
   srand(time(0));
   int min=1;
   int max=3;
   int flag=1;
   int inp=0;
  // while(flag){ 

    int randNo=(rand()%max) +min;
    printf("*****************Rock.....Paper......Scissor*****************\n");
    printf("Enter input(1-3) \n1.Rock\n2.Paper\n3.Scissor\n");
    scanf(" %d",&inp);
    
    if(inp==1 && randNo==3){
        printf("You Win!\n");
    }

    if(inp==1 && randNo==2){
        printf("You Lose!\n");
    }

    if(inp==2 && randNo==1){
        printf("You Win!\n");
    }

    if(inp==2 && randNo==3){
        printf("You Lose!\n");
    }

    if(inp==3 && randNo==2){
        printf("You Win!\n");
    }

    if(inp==3 && randNo==1){
        printf("You Lose!\n");
    }
    
    if(inp==randNo){
        printf("Its A Tie!\n");
    }

   
    
  // }
return 0;
}