// program to calculate the area of circle, rectangle, triangle using switch 
#include<stdio.h>
#include<math.h>
int main(){
    int choice;
    printf("Enter figure(Circle:1, Rectangle:2, Triangle:3): ");
    scanf("%d",&choice);
    float area;
    float r;
    float a,b,c;

    switch(choice){
        case 1 :
            printf("Circle\n");
            printf("Enter radius: ");
            scanf("%f",&r);
            area = 3.14*r*r;
        case 2:
            printf("Rectangle\n");
            printf("Enter sides a, b: ");
            scanf("%f%f",&a,&b);
            area = a*b;
        case 3:
            printf("Triangle\n");
            printf("Enter sides a, b, c: ");
            scanf("%f%f%f",&a,&b,&c);
            area = (a+b+c)/2;
            area = area*(area-a)*(area-b)*(area-c);
            area = (float) sqrt(area);
        default:
            area = 0;
            printf("Input not valid\n");
    }

    printf("Area : %f\n",area);
    return 0;
}