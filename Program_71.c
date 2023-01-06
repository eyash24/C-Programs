// convert binary to decimal 
#include<stdio.h>
#include<math.h>
int main(){
    int n_bin,n_dec=0, rem, power_count=0;
    printf("enter n: ");
    scanf("%d",&n_bin);

    while(n_bin!=0){
        rem=n_bin%10;
        n_dec += rem * pow(2,power_count);
        power_count+=1;
        n_bin=(n_bin-rem)/10;
    }
    printf("Binary to decimal : %d\n",n_dec);
    return 0;
}