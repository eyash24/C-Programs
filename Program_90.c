// trace and norm of a given square matrix
#include<stdio.h>
int main(){
    int n, arr[100][100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int trace=0, norm=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                trace += arr[i][j];
            } norm += (arr[i][j]*arr[i][j]);
        }
    }
    printf("Trace, norm: %d, %d\n",trace, norm);
    return 0;
}