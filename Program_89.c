// matrix magic square or not 
#include<stdio.h>
int main(){
    int n, r_sum[100], c_sum[100], sum=0, m_sq = 1;
    int arr[100][100];
    printf("Enter n: ");
    scanf("%d",&n);
    printf("Enter elements: \n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    // row sum
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[i][j];
        }
        printf("Sum: %d\n",sum);
        r_sum[i] = sum;
    }
    // column sum
    for(int i=0;i<n;i++){
        sum = 0;
        for(int j=0;j<n;j++){
            sum += arr[j][i];
        }
        printf("Sum: %d\n",sum);
        c_sum[i] = sum;
    }
    for(int m=0;m<n;m++){
        if(r_sum[0]!=r_sum[m]){
            m_sq = 0;
            break;
        }
    }
    if (m_sq==1 && c_sum[0]==r_sum[0]){
        for(int m=0;m<n;m++){
            if(c_sum[0]!=c_sum[m]){
                m_sq = 0;
                break;
            }
        }
    }
    if (m_sq==1){
        printf("Matrix is a magic square.\n");
    } else {printf("Not a magic square.\n");}


    return 0;
}