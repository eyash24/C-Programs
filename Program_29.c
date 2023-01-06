// Pattern printing
#include<stdio.h>
int main(){
    for(int i=1; i<11;i++){
        for(int j=0;j<i;j++){
            printf("%d ",j+1);
        }
        if (i != 10){
            for(int space = 0;space <=(31-(i*3));space++){
                printf(" ");
            }
            
        }
        for (int l = i; l>0;l--){
            if (l != 10){
                printf("%d ",l);
            } else {
                printf("");
            }
        }
        printf("\n");
    }
    return 0;
}