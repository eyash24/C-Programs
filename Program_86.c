// Program to reverse an array using auxiliary array 
#include<stdio.h>
int main() {
    int arr[100],n, rev[100];
    printf("Enter n: ");
    scanf("%d",&n); printf("Enter Elements :\n");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int j=n-1, i=0 ;j>=0;j--,i++){
        rev[i]=arr[j];
    }
    printf("Reverse array: ");
    for(int i = 0;i<n;i++){
        printf("%d ",rev[i]);
    }
    printf("\n");
    return 0;
}
