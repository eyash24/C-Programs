#include<stdio.h>
int main(){
    int i=0;
    /*
    for(;;){
        printf("%d\n",i);
        if (i == 10){
            break;
        }
    }
    // infinite loop 
    
    for(;;i++){
        printf("%d\n",i);
        if (i == 10){
            break;
        }
    }
    printf("\n");
    i =0;
    for(;;++i){
        printf("%d\n",i);
        if (i == 10){
            break;
        }
    }
    
    output:
    printing of 0-10
    
    printing of 0-10
    */
    int break_ = 0;
    for(int j=0;j<2;j++){
        for(int m=0;m<3;m++){
            if(m==2 && j==1){
                break_ = 1;
                break;
            }
            printf("%d\n",m);
        }
        printf("\n");
        printf("break_:%d\n",break_)
        if (break_ == 1){
            printf("Break only from inner loop.\n");
        }
    }
    /*
    output:
    0
    1
    2

    0
    1
    */
}