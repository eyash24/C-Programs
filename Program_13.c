#include<stdio.h>

int main(){
    char ch;
    printf("Enter character (a-z, 0-9): ");
    scanf("%c",&ch);

    if ((ch == '1')||(ch=='2')||(ch=='3')||(ch=='4')||(ch=='5')||(ch=='6')||(ch=='7')||(ch=='8')||(ch=='9')||(ch=='0')){
        printf("Character is a digit\n");
    } else if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u')){
        printf("Character is vowel\n");
    } else{
        printf("character is consonant");
    }

    return 0;
}
