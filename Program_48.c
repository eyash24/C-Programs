// count words
#include<stdio.h>
int main() {
    const int m=100;
    char s[m];
    gets(s);
    puts(s);
    int i=0,count=0;
    while(s[i]!='\0'){
        if(s[i]==' ' && s[i+1]!=' '){
            count ++;
        }
        i++;
    }
    printf("%d\n",count+1);
    return 0;
}