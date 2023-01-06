#include<stdio.h>

int main(){
    float score;
    char grade;
    printf("Enter score: ");
    scanf("%f",&score);

    if(score <=10 && score>=9){
        grade = 'A';
    }else if(score <9 && score >= 7){
        grade = 'B';
    }else if(score<7 && score >=5){
        grade = 'C';
    }else if(score<5 && score >=3){
        grade = 'D';
    }else if(score < 3){
        grade = 'F';
    }

    printf("Grade : %c\n", grade);
    return 0;
}
