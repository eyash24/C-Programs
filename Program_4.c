#include<stdio.h>
#include<math.h>
int main(){
    int n_1 = pow(5-3,2);
    int n_2 = pow(4-2,2);

    float dis = sqrt(n_1+n_2);
    printf("%f\n", dis);

    return 0;
}