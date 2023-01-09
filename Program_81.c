// implicit conversion 
/*
#include<stdio.h>
int main(){
    int x =10;
    char y='a';
    // y converted into ascii value (a=97)
    x = x+y;
    printf("%d\n",x);
    printf("%c\n",y);
    return 0;
} */
/* output:
107
a */
/*
// explicit conversion 
#include<stdio.h>
void main() {
    double x = 1.2;
    int sum = (int)x + 10;
    printf("%d\n",sum);
    printf("%f\n",x);
} */
/*
output:
11
1.200000
*/

#include <stdio.h>
int main ()
{	float f1 = 123.125, f2;
	int i1, i2 = -150;
	i1 = f1; 
    // float to integer conversion
	printf("float assigned to int produces: ");
	printf("%d\n",i1);
	f2 = i2; 
    // integer to float conversion
	printf("integer assigned to float produces: ");
	printf("%f\n",f2);
	i1 = i2 / 100; 
    // integer divided by integer
	printf("integer divided  by 100 produces: ");
	printf("%d\n",i1);
	f1 = i2 / 100.0; 
    // integer divided by a float
	printf("integer divided  by 100.0 produces: ");
	printf("%f\n",f1);
	return 0;
}
/*
output:
float assigned to int produces: 123
integer assigned to float produces: -150.000000
integer divided  by 100 produces: -1
integer divided  by 100.0 produces: -1.500000
*/
