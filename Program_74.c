// integer is palindrome or not 
#include<stdio.h>
int main() {
    int n_org;
    printf("Enter n: ");
    scanf("%d",&n_org);

    int n=n_org, n_rev=0, rem=0;
    while (n>0){
        rem = n%10;    
        n_rev = (n_rev*10) + rem; 
        n = (int) n/10;  
    }


    if(n_org == n_rev){
        printf("Palindrome \n");
    } else {
        printf("not a palindrome\n");
    }
    return 0;
}