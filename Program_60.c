// intersection and union
#include<stdio.h>
int main(){
    int a_1[5]={1,2,3,4,5}, a_2[4]={8,2,1,7}, union_[100],intersection[100];
    int index_union=0,index_intersection=0;
    for(int i=0;i<5;i++){
        union_[index_union]=a_1[i];
        index_union++;
    }
    for(int i=0;i<4;i++){
        int exist=0;
        for(int j=0;j<index_union+1;j++){
            if(a_2[i] == union_[j]){
                exist=1;
                break;
            }
        }
        if(exist==0){
            union_[index_union]=a_2[i];
            index_union++;
        }else{
            intersection[index_intersection]=a_2[i];
            index_intersection++;
        }
    }
    for(int i=0;i<index_union;i++){
        printf("%d\t",union_[i]);
    }
    printf("\n");
    for(int i=0;i<index_intersection;i++){
        printf("%d\t",intersection[i]);
    }
    printf("\n");
    return 0;
}