#include<stdio.h>

int main(){
    int month, leap,day;
    printf("Enter month number: ");
    scanf("%d",&month);

    printf("enter if leap year or not (yes : 1, no : 0): ");
    scanf("%d",&leap);

    if (month == 1){
        day = 31;
    } else if( month == 2){
        day = 31+28;
    }else if( month == 3){
        day = 31+28+31;
    }else if( month == 4){
        day = 31+28+31+30;
    }else if( month == 5){
        day = 31+28+31+30+31;
    }else if( month == 6){
        day = 31+28+31+30+31+30;
    }else if( month == 7){
        day = 31+28+31+30+31+30+31;
    }else if( month == 8){
        day = 31+28+31+30+31+30+31+31;
    }else if( month == 9){
        day = 31+28+31+30+31+30+31+31+30;
    }else if( month == 10){
        day = 31+28+31+30+31+30+31+31+30+31;
    }else if( month == 11){
        day = 31+28+31+30+31+30+31+31+30+31+30;
    }else if( month == 12){
        day = 31+28+31+30+31+30+31+31+30+31+30+31;
    }

    if(leap == 1){
        day+= 1;
    }

    printf("Days: %d\n",day);
    return 0;
}
