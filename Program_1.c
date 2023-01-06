#include<stdio.h>
int main(){
    int a,b,c,d, num;
    float sum;

    printf("Enter number: ");
    scanf("%d",&num);

    a = num %10;
    num = (num -a)/10;
    b = num %10;
    num = (num -b)/10;
    c = num %10;
    num = (num -c)/10;
    d = num;
    
    sum = (float)(a+b+c+d);
    printf("Sum : %f\n", sum);


    return 0;
}