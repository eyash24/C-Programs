// fibonacci series 
#include<stdio.h>
int main(){
    int n,n_1=0,n_2=1,n_;
    printf("Enter n: ");
    scanf("%d",&n);
    if (n==1){
        printf("%d",n_1);
    } else if (n==2){
        printf("%d\t",n_1);
        printf("%d\t",n_2);
    } else if (n>2){
        printf("%d\t",n_1);
        printf("%d\t",n_2);
        for (int i=2;i<n;i++){
            n_=n_1+n_2;
            printf("%d\t",n_);
            n_1=n_2;
            n_2=n_;
        }
    } else {
        printf("Invalid input");
    }
    printf("\n");
    return 0;
}