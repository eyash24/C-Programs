#include<stdio.h>

int main(){
    char str[50];
    printf("Enter string: ");
    gets(str);
    printf("String : %s\n",str);
    puts(str);
    printf("\n");
    return 0;
}