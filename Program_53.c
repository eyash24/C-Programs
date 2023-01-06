// Linear search 
#include<stdio.h>
int main() {
    int a[100],n,f=0,pos;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ele;
    printf("Enter ele: ");
    scanf("%d",&ele);

    for(int j=0;j<n;j++){
        if(a[j]==ele){
            f=1;
            pos=j+1;
            break;
        }
    }
    if(f==1){
        printf("Found in %d position\n",pos);
    }else{
        printf("Not found\n");
    }
    
    return 0;
}