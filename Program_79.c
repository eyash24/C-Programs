/* pattern 4
1
2 4
3 5 7
6 8 10 12
9 11 13 15 17
*/
#include<stdio.h>
int main(){
    int n,n_1=1,n_2=2;
    scanf("%d",&n);
    for(int i=1; i<=n;i++){
        if(i%2==0){
            for(int j=0;j<i;j++){
                printf("%d ",n_2);
                n_2 += 2;
            }
        } else {
            for(int j=0;j<i;j++){
                printf("%d ",n_1);
                n_1 += 2;
            }
        }
        printf("\n");
    } 
    return 0;
}