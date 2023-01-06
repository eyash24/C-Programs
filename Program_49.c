#include<stdio.h>
#include<string.h>
int main(){
    char s_1[100];
    gets(s_1);
    puts(s_1);
    char s_2[100];
    gets(s_2);
    puts(s_2);
    printf("\n");
    printf("%lu %lu\n",strlen(s_1),strlen(s_2));
    printf("%d\n",strcmp(s_1,s_2));
    strcat(s_1,s_2);
    printf("%s\n%s\n\n",s_1,s_2);

    char s_3[100],s_4[100];
    strcpy(s_3,s_2);
    puts(s_3);
    return 0;
}

