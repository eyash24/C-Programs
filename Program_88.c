// Searching for an elements in the matrix and it's occurences 
#include<stdio.h>
int main(){
    int r,c,ele,ele_occur=0;
    int arr[100][100];
    printf("Enter rows, columns, element: ");
    scanf("%d %d %d",&r,&c,&ele);
    printf("Enter elements: \n");
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            if(arr[i][j]== ele){
                ele_occur +=1;
            }
        }
    }
    printf("Number of occurrences of %d: %d\n",ele, ele_occur);
    return 0;
}