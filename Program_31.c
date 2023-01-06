#include<stdio.h>
int main(){
    int x=10, y=20,z=5;
    int i;
    i = x<y<z;
    printf("%d",i);
    printf("\n");

    int a=10,b=20,c=30;
    (c>b>a)?printf("TRUE"):printf("False");
    printf("\n");

    int p=-3,j=2,k=0,m;
    printf("bef%d,%d,%d\n",p,j,k);
    m = ++i||++j&&++k;
    printf("%d,%d,%d\n",p,j,k);
    printf("%d,%d,%d,%d\n",p,j,k,m);
    return 0;
}