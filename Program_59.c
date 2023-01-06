// 2nd largest number 
#include<stdio.h>
#include<string.h>
int main(){
    int arr[7]={1,2,0,6,3,10,7};
    int m_1=0,m_2=0;
    for(int i=0;i<7;i++){
        if(arr[i]>=m_1){
            m_1 = arr[i];
        }
    }
    for(int i=0;i<7;i++){
        if(arr[i]>=m_2){
            if (arr[i]< m_1){
                m_2 = arr[i];
            }
        }
    }
    printf("%d\n",m_2);
    return 0;
    
}