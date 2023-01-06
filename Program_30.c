#include<stdio.h>
int main(){
    int i=10,j=12,k,l,m,n;
    k = i&j;
    l = i|j;
    m = i<<3;
    n = j>>2;
    printf("%d,%d,%d,%d,%d,%d\n",i,j,k,l,m,n);
    
    return 0;
}