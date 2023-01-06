#include<stdio.h>
int main() {
    char q[]="Enter your name: ";
    char g[]="Hello ";
    char name[100];
    printf("%s",q);
    scanf("%s",name);
    printf("%s%s\n",g,name);

    printf("\n");
    return 0;
}