#include<stdio.h>
int main(){
    // char x;
    // for ( x = 0 ; x <= 255 ; x++ )
    //     printf ( "\nAscii value %d Character %c", x, x ) ;

    // short int i = 0;
    // for(i<=5 && i>=-1; ++i;i>0)
    //     printf("%hu,", i);

    // int i = 5; 
    // while(i-- >= 0)
    //     printf("%d,", i); 
    // i = 5;
    // printf("\n"); 
    // while(i-- >= 0)
    //     printf("%i,", i); 
    // while(i-- >= 0)
    //     printf("%d,", i);

    // int i = 0, j = 0;
    // while (i < 2)
    // {
    //     l1 : i++;
    //     while (j < 3)
    //     {
    //         printf("Loop\n");
    //         goto l1;
    //     }
    // }
    // output: printing loop infinte times

    int i=1;
    for(;;)
    {
        printf("%d\n", i++);
        if(i>10)
            break;
    }  

    // int i ;
    // for ( i = 1 ; i <= 5 ; printf ( "\n%c", 65 ) ) ;
    //     i++ ; 
    /* output : (infinte loop) 
    A
    A
    A
    A...*/

    // int i = 0;
    // for(; i<=5; i++);
    //     printf("%d", i);

    int x = 4, y = 0, z ; 
    while ( x >= 0 )
    {
        x-- ;
        y++ ;
        if ( x == y )
            continue ; 
        else
            printf ( "\n%d %d", x, y ) ;
    }
            
    return 0;
}