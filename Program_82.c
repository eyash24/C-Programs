#include<stdio.h>
int main(){
    printf("%d\n",!(1)); // output: 0
    /*
    !(True) -> error
    !(TRUE) -> error
    !(true) -> error
    */
    int n=100;
    char a='a';
    char ab[10];
    float f=0.123;
    double f_=0.231432;

    printf("%d\n",n<<5);
    printf("%d\n",n>>5);
    printf("%d\n",~n);
    printf("%d\n",~(~n));
    /*
    output: 
    3200
    3
    -101
    100
    */

    printf("\n");
    printf("%d\n", sizeof(n));
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(ab));
    printf("%d\n", sizeof(f));
    printf("%d\n", sizeof(f_));

    printf("\n");
    printf("%lu\n", sizeof(n));
    printf("%lu\n", sizeof(a));
    printf("%lu\n", sizeof(ab));
    printf("%lu\n", sizeof(f));
    printf("%lu\n", sizeof(f_));

    /*
    output:
    4
    1
    10
    4
    8

    4
    1
    10
    4
    8
    */

    return 0;
}