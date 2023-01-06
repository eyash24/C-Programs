// bubble sort
#include<stdio.h>
int main() {
    int a[100],n;
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("\n");

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                int t;
                t= a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}