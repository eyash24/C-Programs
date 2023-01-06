// Week day no to week day name
#include<stdio.h>
int main(){
    int a, b, operator;
    printf("Enter two operands a, b: ");
    scanf("%d%d",&a,&b);
    printf("Enter the operator(+: 1,-: 2,*: 3,/: 4) : ");
    scanf("%d",&operator);
    float ans;

    switch(operator){
        case 1 : ans = a+b;
            break;
        case 2:
            ans = a-b;
            break;
        case 3:
            ans = a*b;
            break;
        case 4:
            ans = (float) a/b;
            break;
        default:
            printf("Input not valid\n"); 
    }
    printf("Ans : %f\n",ans);
    return 0;
}