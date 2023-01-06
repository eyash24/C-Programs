#include<stdio.h>
int main() {
    int number, rev=0, right_digit;
    printf("Enter your number.\n");
    scanf("%d",&number);

    while (number!=0){
        right_digit = number %10;
        rev = rev*10 + right_digit;
        number = number/10;
    }

    printf("Rev number : %d\n",rev);
    return 0;
}