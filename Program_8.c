#include<stdio.h>  
#include<math.h>

int main(){
    int a,b,c;

    printf("Enter a b c: ");
    scanf("%d%d%d", &a,&b,&c);

    if(a==0){
        printf("Roots cannot be found divison by zero error!\n");
    } else if(a!=0){
        int num;
        num = (int)((b*b) - (4*a*c));
        if(num < 0){
            printf("Roots are imaginery!\n");
        } else {
            float r_1,r_2;
            float num_2;
            num_2 = (float)sqrt(num);
            r_1 = (float)((-b + num_2)/(2*a));
            r_2 = (float)((-b - num_2)/(2*a));
            printf("r_1 r_2: %f %f\n",r_1,r_2);
        }
    }
    return 0;
}