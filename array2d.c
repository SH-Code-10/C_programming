#include<stdio.h>
int main(){
    int arr[2][2]={{3,4},{1,2}};
    int one[4];
    int i,j,k=0;
    int m=2,n=2;

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            one[k]=arr[i][j];
            k++;
}
    }
      printf("Original array:\n");
      for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
      }
    int temp=0;
  for(i=0;i<m*n;i++){
        for(j=i+1;j<m*n;j++){
            if(one[i]>one[j]){
                temp=one[i];
                one[i]=one[j];
                one[j]=temp;


            }


        }
 }
 k=0;
 for(i=0;i<m;i++){
    for(j=0;j<n;j++){
        arr[i][j]=one[k];
        k++;
    }
 }
 printf("SOrted array: \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
}  printf("\n");
    }

    printf("Second largest element: \n %d",one[m*n-2]);
    
  

   



}