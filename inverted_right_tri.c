#include <stdio.h>
int main() {

    for(int i=5;i>=1;i--){
        for(int space=1;space <=5-i;space++)printf(" ");
        for(int j=0;j<i;j++){
            printf("%c",'*');
        }
      printf("\n");

    }

return 0;
}