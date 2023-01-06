// Prime or not 
#include<stdio.h>
int main() {
    int n, prime=1;
    printf("enter n: ");
    scanf("%d",&n);
    for(int i=2;i<n;i++){
        if (n%i == 0){
            prime=0;
            break;
        }
    }
    if (prime==1){
        printf("Prime Number\n");
    }else {
        printf("Not a prime number\n");
    }
    return 0;
}