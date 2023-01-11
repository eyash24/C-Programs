// trace and norm of a given square matrix
#include<stdio.h>
int main(){
    int n=2;
    int arr[2][2]={{1,2},{1,2}};
    int trace=0, norm=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                trace += arr[i][j];
            }
            norm += (arr[i][j]*arr[i][j]);
        }
    }
    printf("Trace, norm: %d, %d\n",trace, norm);
    return 0;
}