#include<stdio.h>

int main(){
    float fah, centi, f_fah, f_centi;

    fah = 100;
    f_centi  = (5.0/9.0)*(fah-32);

    centi = f_centi;
    f_fah = (9.0/5.0)*centi + 32;

    printf("fah, f_centi: %f, %f\n", fah, f_centi);
    printf("centi , f_fah: %f, %f\n", centi, f_fah);
    return 0;
}
