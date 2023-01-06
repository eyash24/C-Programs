#include<stdio.h>
int main() {
    int n=0,sum_1=0,sum_2=0;

    do {
        sum_1 +=n;
        n++;
    } while(n<=100);

    n= 0;
    while(n<=100){
        sum_2 += n;
        n++;
    }

    printf("Sum_1: %d, sum_2: %d\n",sum_1,sum_2);
    return 0;
}