#include<stdio.h>
int multiply(int size,int arr1[size][size],int arr2[size][size]){
    int j,k;
    int result[size][size];
    int i;
    for(i=0;i<size;i++){
        for(j=0;j<size;j++){
            result[i][j]=0;
            for(k=0;k<2;k++){
                result[i][j]+=arr1[i][k]*arr2[k][j];

            }
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }
}
int main(){
    int arr1[2][2]={
        {1,2},
        {3,4}
    };
    int arr2[2][2]={{1,2},
{3,4}};
int size=2;
multiply(2,arr1,arr2);
}