// 3 student marks in 5 subjects, total marks of each student, avg marks of each subject
#include<stdio.h>
int main(){
    int arr[3][5];
    printf("Enter marks: \n");
    for(int i=0;i<3;i++){
        printf("Student %d: \n",i+1);
        for(int j=0;j<5;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int total[3]={0,0,0}; 
    float avg[5];
    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++){
            total[i] += arr[i][j];
        }
    }
    for(int j=0;j<5;j++){
        float avg_=0.0;
        for(int i=0;i<3;i++){
            avg_+=arr[i][j];
        }
        avg[j]= (float)(avg_/3);
    }
    printf("Total marks of each student: %d, %d, %d\n", total[0],total[1],total[2]);
    printf("Avg marks of each subject: \n");
    for(int i=0;i<5;i++){
        printf("%f ",avg[i]);
    }
    
}