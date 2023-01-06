// calculate discount 
#include<stdio.h>
int main(){
    int rupee;
    float discount = 0.0;
    printf("Enter rupees: ");
    scanf("%d",&rupee);

    switch(rupee <500){
        case 1: discount = 0;
            break;
        case 0:
            switch(rupee < 800){
                case 1: discount = (rupee-499)*0.2;
                    break;
                case 0: discount = (rupee-799)*0.25 + 40.00;
                    break;
            }
            break;
        default: printf("Invalid Input\n");
    }
    printf("Discount : %f\n",discount);
    return 0;
}
