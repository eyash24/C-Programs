/*
Pattern_1
   * 
  * * 
 * * * 
* * * * 
*/
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int s=1;s<n-i;s++){
            printf(" ");
        }
        for(int j=0;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}