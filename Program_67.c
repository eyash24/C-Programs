#include <stdio.h>
int main() {
    int a[10][10],m,n;
    int rowsum[10],colsum[10];
    printf("enter dimension for a \n");
    scanf("%d  %d", &m, &n);
    printf("enter elements for a \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d",&a[i][j]);
        }
            
  }
    for (int i = 0; i < m; i++)
    {
        rowsum[i] = 0;
        for (int j = 0; j < n; j++) 
            rowsum[i] = rowsum[i] + a[i][j];
    }
    printf("\n");
    for (int j = 0; j < n; j++)
    {
        colsum[j] = 0;
        for (int i = 0; i < m; i++) 
            colsum[j] = colsum[j] + a[i][j];
    }
    for (int i = 0; i < m; i++) 
    {
        for (int j = 0; j < n; j++) 
            printf("\t %d", a[i][j]);
    printf("->") ;
    printf("%d\n", rowsum[i]);
    }
    printf("\n");
    for (int i = 0; i < n; i++) 
        printf("\t %d", colsum[i]);
    return 0;

}