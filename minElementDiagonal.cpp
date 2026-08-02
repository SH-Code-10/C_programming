#include<stdio.h>
int main(){
    int row;
    int col;
    scanf("%d",&row);
    scanf("%d",&col);
    int arr[row][col];
    int i,j;
    printf("Enter elements : \n");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
   int min= arr[0][0];
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
}
       for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            if(i==j){
                arr[i][j]=min;
            }
        }

    }
    printf("Smallest element diagonal : \n");
           for(i=0;i<row;i++){
        for(j=0;j<col;j++){
          printf("%d ",arr[i][j]);
            }
            printf("\n");

        }

    }
