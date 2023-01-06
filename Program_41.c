#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    for(int j=0; j<n; j++){
        printf("%d\t",arr[j]);
    }
    printf("\n");
    return 0;
}