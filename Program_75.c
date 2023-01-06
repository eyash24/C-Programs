// armstrong number 
#include<stdio.h>
#include<math.h>
int main(){
    int n, rem, n_new=0;
    printf("Enter n: ");
    scanf("%d",&n);
    int n_org;
    n_org = n;
    while(n>0){
        rem = n%10;
        n_new += pow(rem,3);
        n= (n-rem)/10;
    }
    if (n_new == n_org){
        printf("Armstrong number\n");
    } else {
        printf("Not an armstrong number\n");
    }
    return 0;
}