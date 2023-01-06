#include<stdio.h>
int main(){
        
    // float a = 5, b = 2 ;
    // float c ;
    // c = a % b ;
    // printf ( "%f", c ) ;
    // output: error: invalid operands to binary expression ('float' and 'float') 

    // int a, b ;
    // a = -3 - - 3 ;
    // b = -3 - - ( - 3 ) ;
    // printf ( "a = %d b = %d", a, b ) ;
    // output: a = 0 b = -6

    // enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
    // printf("%d, %d, %d, %d, %d, %d\n", MON, TUE, WED, THU, FRI, SAT);
    // output: -1, 0, 6, 7, 8, 9

    // int x = 10, y = 20, z = 5, i;
    // i = x < y < z;
    // printf("%d\n", i);
    // output: 1

    // unsigned int m = 32;
    // printf("%x\n", ~m); %x -> print hexa decimal values 
    // output: ffffffdf

    // printf("%f", ((int)5.1) %((int)2.1));
    // output: 0.000000

    // printf("%d", 1 << 2 + 3 << 4);
    // output: 512

    // printf("%d",printf("Manipal"));
    // output: Manipal7

    // printf("%d\n", 1 << (2 + 3) << 4); output: 512
    // printf("%d\n", (1 << 2) + (3 << 4)); output: 52

    // int i=-3, j=2, k=0, m;
    // m = ++i && ++j && ++k;
    // printf("%d, %d, %d, %d\n", i,j, k, m);
    // output: -2, 3, 1, 1

    // int i=-3, j=2, k=0, m;
    // m = ++i || ++j && ++k; 
    // printf("%d, %d, %d, %d\n",i, j, k, m);
    // output: -2, 2, 0, 1

    // int x=4, y, z;
    // y = --x;
    // z = x--;
    // printf("%d, %d, %d\n", x, y, z);
    // output: 2, 3, 3

    // enum days {MON=-1, TUE, WED=6, THU, FRI, SAT};
    // printf("%d, %d, %d, %d, %d, %d\n", ++MON, TUE, WED, THU, FRI, SAT);
    // output: error: expression is not assignable

    return 0;
}