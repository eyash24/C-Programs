#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int t;
    for (int k=0,j=n-1;k<n/2;k++,j++){
        t=arr[k];
        arr[k]=arr[j];
        arr[j]=t;
    }
    printf("\n");
    for(int m=0;m<n;m++){
        printf("%d\t",arr[m]);
    }
    printf("\n");
    return 0;
}