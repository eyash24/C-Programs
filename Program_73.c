// sum of n terms of sin series 
#include<stdio.h>
#include<math.h>
int main(){
    int n_term;
    float sum; sum=0.0;
    printf("Enter n: ");
    scanf("%d",&n_term);
    for(int i=1; i<=n_term; i++){
        sum += i - (float)(pow(i,3)/6) + (float)(pow(i,5)/120) - (float)(pow(i,7)/5040);
    }
    printf("Sum of %d terms of sin series: %f\n",n_term,sum);
    return 0;
}