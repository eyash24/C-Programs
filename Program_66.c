#include <stdio.h>
#include <string.h>
int main() {
    char a[10], b[3] = {'1', '2', '3'};
    strcpy(a, b);

    printf("%s\n", a);
    printf("%s\n", b);

    return 0;
}