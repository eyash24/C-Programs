// calculate the amt of electricity bill
#include<stdio.h>
int main(){
    int units;
    float bill = 0.0;
    printf("Enter the number of units: ");
    scanf("%d",&units);

    switch(units <=100){
        case 1: bill = 0;
            break;
        case 0:
            switch(units<=200){
                case 1: bill = (units-100)*1.5;
                    break;
                case 0:
                    switch(units <= 400){
                        case 1: bill = (units-200)*2.5 + 150.00;
                            break;
                        case 0: bill = (units-400)*3.5 + 650.00;
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
