// WAP to delete element from an array 
// shifting elements to left
#include<stdio.h>
int main() {
    int a[100], n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int pos;
    scanf("%d",&pos);
    for(int j=pos-1;j<n-1;j++){
        a[j]=a[j+1];
    }
    n=n-1;
    for(int m=0;m<n;m++){
        printf("%d\t",a[m]);
    }
    printf("\n");
    return 0;
}