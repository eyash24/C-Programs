// WAP to insert element in given position 
// shifting elements to right 
#include<stdio.h>
int main(){
    int a[100], n,pos, no;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter pos and integer: ");
    scanf("%d %d",&pos,&no);

    for(int j=n;j>=pos;j--){
        a[j]=a[j-1];
    }
    a[pos-1]=no;
    n= n+1;
    for(int m=0;m<n;m++){
        printf("%d\t",a[m]);
    }
    printf("\n");
    return 0;
}