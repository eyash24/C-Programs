#include<stdio.h>
int main(){
    // int arr[5], i=0; 
    // while(i<5){
    //     printf("%d\n",i);
    //     arr[i]= ++i;
    //     printf("i after : %d, arr[%d]: %d\n",i, i, arr[i]);
    // } 
    // for(i=0; i<5; i++) 
    //     printf("%d, ", arr[i]);
    // printf("%d, ", arr[5]);

    // output: -1256491696, 1, 2, 3, 4,

    // int arr[] = {12, 14, 15, 23, 45};
    // printf("%u, %u\n", arr, &arr);
    // output: 3196126512, 3196126512

    // float arr[ ] = {12.4, 2.3, 4.5, 6.7};
    // printf("%d\n", sizeof(arr)/sizeof(arr[0]));
    // output: 4

    // int i;
    // int arr[5] = {0};
    // for (i = 0; i <= 5; i++)
    //     printf("%d ", arr[i]);
    // output: 0 0 0 0 0 0 

    int a[ ][ ] = {{1,},{3,4}}; int i, j;
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) printf("%d ", a[i][j]);

    // int size = 4;
    // int arr[size];
    // if(arr[0])
    //     printf("Initialized to ZERO");
    // else
    //     printf("Not initialized to ZERO");
    // output: Initialized to ZERO

    // int a[2][3] = {1, 2, 3, 4, 5};
    // int i = 0, j = 0;
    // for (i = 0; i < 2; i++)
    //     for (j = 0; j < 3; j++)
    //         printf("%d ", a[i][j]);
    // output: 1 2 3 4 5 0

    // int expr;
    // double value[5]={1.0,2.0,3.0,4.0,5.0};
    // expr=1|2|3;
    // printf("%d ",expr);
    // printf("%f",value[expr]);
    // output: 3 4.000000

    // int i, j;
    // int a [8] = {1, 2, 3, 4, 5, 6, 7, 8};
    // for(i = 0; i < 3; i++) {
    //     a[i] = a[i] + 1;
    //     i++;
    // }
    // i--;
    // for (j = 7; j > 4; j--) {
    //     int i = j/2;
    //     a[i] = a[i] - 1;
    // }
    // output: 3 2

    // int a[5] = {5, 1, 15, 20, 25}; int i, j, m;
    // i = ++a[1];
    // j = a[1]++;
    // m = a[i++];
    // printf("%d, %d, %d", i, j, m);


    return 0;
}