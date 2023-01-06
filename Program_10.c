#include<stdio.h>

int main(){
    int a,b;
    printf("Enter a b: ");
    scanf("%d%d", &a, &b);

    if(a>=b){
        if(a%b == 0){
            printf("Yes %d is a multiple of %d\n",a,b);
        } else {
            printf("No %d is a not multiple of %d\n",a,b);
        }
    }else if(b>=a){
        if(b%a == 0){
            printf("Yes %d is a multiple of %d\n",b,a);
        } else {
            printf("No %d is a not multiple of %d\n",b,a);
        }
    }

    return 0;
}
