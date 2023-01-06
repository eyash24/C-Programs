// odd or even 

#include<stdio.h>

int main(){

    int x;

    printf("x: ");
    scanf("%d",&x);
    
    if(x %2 == 0){
        printf("Even\n");
    }else if(x%2 == 1){
        printf("Odd\n");
    }

    return 0;
}