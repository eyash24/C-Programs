// Program to generate prime numbers between given 2 limits
#include<stdio.h>
int main() {
    int m,n;
    scanf("%d %d",&m,&n);
    for(int i=m; i<=n;i++){
        int prime = 1;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                prime =0;
                break;
            }
        }
        if(prime == 1){
            printf("%d\n",i);
        }
    }
    return 0;
}