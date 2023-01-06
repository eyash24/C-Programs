// Program to print odd numbers in descending order taking N as input 
#include<stdio.h>
int main(){
    int N;
    printf("enter N: ");
    scanf("%d",&N);
    if (N%2==1){
        while (N>=1){
            printf("%d\t",N);
            N-=2;
        }
    } else {
        N-=1;
        while(N>=1){
            printf("%d\t",N);
            N-=2;
        }
    }
    printf("\n");
    return 0;
} 