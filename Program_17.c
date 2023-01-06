#include<stdio.h>

int main(){
    printf("Enter a character: ");
    char ch = getchar();
    printf("ch : %c\n", ch);
    putchar(ch);
    printf("\n");
    return 0;
}