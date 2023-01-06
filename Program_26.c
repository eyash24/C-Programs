// calculate the amt of telephone bill
#include<stdio.h>
int main(){
    int call;
    float bill = 0.0;
    printf("Enter the number of calls: ");
    scanf("%d",&call);

    switch(call <=150){
        case 1: bill = 0;
            break;
        case 0:
            switch(call<=250){
                case 1: bill = (call-150)*0.9;
                    break;
                case 0:
                    switch(call <= 400){
                        case 1: bill = (call-250)*1.2 + 90.00;
                            break;
                        case 0: bill = (call-400)*1.5 + 270.00;
                            break;   
                    }
                    break;
            }
            break;
        default: printf("Invalid Input\n");
    }
    printf("Bill : %f\n",bill);
    return 0;
}
