// reverse number
#include<stdio.h>
#include<math.h>
int main(){
    int n_org,n_rev,rem;
    printf("Enter n: ");
    scanf("%d",&n_org);

    while (n_org>0){
        rem=n_org%10;    
        n_rev=(n_rev*10)+rem;    
        n_org=n_org/10;    
    }
    printf("Reverse number: %d\n",n_rev);
    return 0;
}