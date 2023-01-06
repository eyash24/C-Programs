#include<stdio.h>
int main(){
    int a = 3.5, b=3.6;
    printf("%d\n",a < b);
    a=7/22*(3.14+2)*3/5; // implicit conversion into float data type
    printf("%f\n",a); 
    return 0;
}