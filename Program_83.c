#include<stdio.h>
int main(){
    int a=20, b=1;
    printf("%d\n",(a==10+15 && (a-8)==++b));
    printf("%d\n",b);
    /*
    output:
    0
    1
    */

    if(-1){
        printf("Any non zero works\n");
    } else {
        printf("Only +ve non zero works\n");
    }

    /*
    Any non zero works
    */

    printf("\n");
    char ch;

    printf("Enter character: ");

    scanf("%c",&ch);

    if (ch >= 'a' && ch <= 'z'){
        printf("lowercase char\n");
    } else if(ch >= 'A' && ch <= 'Z'){
        printf("uppercase char\n"); 
    } else if (ch >= '0' && ch <= '9'){
        printf("digit char\n");
    }
    else{
        printf(" special char\n");
    }

    return 0;    
}