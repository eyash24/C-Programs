

#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,root1,root2,re,im, disc;
    scanf("%f %f %f",&a,&b,&c);
    disc=b*b-4*a*c;
    if(disc<0){
        printf("imaginary roots\n");
        re= - b / (2*a);
        im = pow(fabs(disc),0.5)/(2*a);
        printf("root1= %.21f+%.21f i and root2 =%.21f-%.2f i", re,im,re,im);

    } else if (disc==0){
        printf("Real & equal roots");
        re=-b / (2*a);
        printf("Root1 and root2 are %.21f",re);
    } else {
        printf("Real & distinct roots");
        printf("Roots are");
        root1=(-b +sqrt(disc))/(2*a);
        root2=(-b -sqrt(disc))/(2*a);
        printf("Root1 = %.21f and root2=%.21f",root1,root2);
    }
    return 0;
}