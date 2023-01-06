#include<stdio.h>

int main(){
    float a,b,c;
    printf("Enter sides a b c: ");
    scanf("%f%f%f",&a,&b,&c);
    if (((a+b) >c) && ((c+a) > b) && ((c+b)>a)){
        float area = (a*b*c)/2;
        printf("Area : %f\n",area);
    } else {
        printf("Area cannot be calculated as conditions are not satisfied.\n");
    }

    return 0;
}
