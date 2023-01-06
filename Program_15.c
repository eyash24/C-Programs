#include<stdio.h>
int main(){
    char str[50];
    int a=2,b=8;
    // The string "2 and 8 are even number"​
    // is now stored into str​
    // sprintf(array_name, format specifier , variable name);
    sprintf(str,"The string %d and %d are even numbers",a,b);
    // display of string 
    printf("%s\n",str);
    return 0;
}