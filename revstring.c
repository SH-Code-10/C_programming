#include<stdio.h>
int main(){
    int m,n,i,j;
    printf("Enter the size in m x n format : ");
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }int temp = arr[0][0];
    int r=0;
    for(i=0;i<m;i++){
        for(j=0;j<=i;j++){
            if(arr[i][j]>temp){
                r=temp;
                arr[i][j]=r;

               
                temp = arr[i][j];

            }
        }
    }
   for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        printf("%d ",arr[i][j]);
    }
    printf("\n");
   }
}