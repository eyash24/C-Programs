// Count characters in string 
#include<stdio.h>
int main() {
    char s[200];
    gets(s);
    int i=0,count=0;
    while(s[i]!='\0'){
        i++,count++;
    }
    printf("%d %d\n",count,i);
    printf("\n");

    int j;
    for(j=0; j<=200; j++){
        if(s[j]=='\0'){
            break;
        }
    }
    printf("%d\n",j);
    return 0;
}