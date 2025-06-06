#include <stdio.h>
 

void fibonachi(int limit);


int main() {
    int limit;
    printf("Enter the limits of series:\n");
    scanf(" %d",&limit);
    
    fibonachi(limit);



return 0;
}

void fibonachi(int limit){
    long long int pre1=1;
    long long int pre2=0;
   for (int i=0 ; i<limit;i++){
      

      if(i==0)printf("%d\n",pre2);
     else if(i==1)printf("%d\n",pre1);
     else {  
     long long int curr = pre1+pre2;
      printf("%lld\n",curr);
      pre2=pre1;
      pre1=curr;
     }
    

      
      
       
   }

}