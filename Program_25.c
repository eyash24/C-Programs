// Calculate bill for internet browsing
#include<stdio.h>
int main(){
    float no_call;
    int case_no;
    float bill;
    printf("Enter the number of calls: ");
    scanf("%f",&no_call);

    if (no_call <= 100){
        case_no = 1;
    } else if(no_call <= 150){
        case_no = 2;
    } else if (no_call <=200){
        case_no = 3;
    } else if(no_call > 200){
        case_no = 4;
    }

    switch(case_no){
        case 1: bill = no_call*200;
            break;
        case 2: bill = ((no_call-100)*0.6) + 20000.00;
            break;
        case 3: bill = ((no_call-150)*0.5) + 20030.00;
            break;
        case 4: bill = ((no_call-200)*0.4) + 20055.00;
            break;
        default: printf("Input not valid\n");
            bill = 0;
    }
    printf("Bill : %f\n",bill);
    return 0;
}