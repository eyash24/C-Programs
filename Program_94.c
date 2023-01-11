// change all lowers to upper case
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter string: ");
    gets(str);
    int n=strlen(str);
    for(int i=0; i<n;i++){
        if(str[i]>=97 && str[i]<=122){
            str[i]=str[i]-32;
        }
    }
    printf("After changing: %s\n",str);
    return 0;
}