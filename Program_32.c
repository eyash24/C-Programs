#include<stdio.h>
int main (){
    char ch;
    scanf("%c",&ch);
    switch(ch){
        case 'a': printf("vowel\n");
            break;
        case 'e': printf("Vowel\n");
            break;
        case 'i': printf("Vowel\n");
            break;
        case 'o': printf("Vowel\n");
            break;
        case 'u': printf("Vowel\n");
            break;
        default:printf("Consonants\n");
    }
    return 0;
}