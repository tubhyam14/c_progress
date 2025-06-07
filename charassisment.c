#include <stdio.h>
int main() {

    char a='\0';
    printf("Enter a character\n");
    scanf(" %c",&a);

    if(a>=32&&a<=47){
        printf("%c is a special character\n",a);
    }
    else if(a>=48&&a<=57){
        printf("%c is a digit\n",a);
    }
    else if(a>=58&&a<=64){
        printf("%c is a special character\n",a);
    }
    else if(a>=65&&a<=90){
        printf("%c is a Capital Alphabet\n",a);
        if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')printf("%c is also a vowel\n",a);
    }

    else if(a>=97&&a<=122){
        printf("%c is a Small Alphabet\n",a);
        if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u')printf("%c is also a vowel\n",a);
    }
    else printf("Invalid Response\n");


return 0;
}