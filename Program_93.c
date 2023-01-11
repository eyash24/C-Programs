// find string length
#include<stdio.h>
int main(){
    char str[100];
    int i=0;
    printf("Enter string: ");
    gets(str);
    while(str[i]!='\0'){
        i++;
    }
    printf("String length: %d\n",i);
    return 0;
}