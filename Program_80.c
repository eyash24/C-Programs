/* Pattern 5
4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4 
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0; i<(2*n-1);i++){
        if(i==0 || i==(2*n-2)){
            for(int m=1;m<=(2*n-1);m++){
                printf("%d ",n);
            }
        } else {
            printf("%d ",n);
            for(int j=0;j<=(2*n-2);j++)
                printf(" ");
            printf("%d ",n);
        }
        printf("\n"); 
    }
    return 0;
}