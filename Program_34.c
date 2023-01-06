#include<stdio.h>

void main( )  
{  
  int n=0, s = 3;
  int total_size_1, total_size_2;
  total_size_1 = s*(sizeof(n));
  total_size_2 = s*(sizeof(int));

  printf ("%d\n", total_size_1);
  printf ("%d\n", total_size_2);

}