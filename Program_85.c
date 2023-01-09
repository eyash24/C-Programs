#include<stdio.h>
int main(){
    int num=2;
    switch(num){
        default: printf("default\n");
        case 1: printf("%d\n",1); break;
        case 2: printf("%d\n",2); break;
        case 3: printf("%d\n",3);
    }
    printf("\n");
    num=3;
    switch(num){
        default: printf("default\n");
        case 1: printf("%d\n",1); break;
        case 2: printf("%d\n",2); break;
        case 3: printf("%d\n",3);
    }
    printf("\n");
    num=4;
    switch(num){
        default: printf("default\n");
        case 1: printf("%d\n",1); break;
        case 2: printf("%d\n",2); break;
        case 3: printf("%d\n",3);
    }
    /*
    output:
    2

    3

    default
    1
    */
    
    return 0;
}
