#include<stdio.h>

int main(){
    int a=2,b=4,c,d;
    char str[50];

    sprintf(str,"a = %d and b = %d",a,b);
    sscanf(str,"a = %d and b = %d",&c,&d);

    printf("c = %d and d = %d\n",c,d);
    return 0;
}