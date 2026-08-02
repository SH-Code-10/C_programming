#include<stdio.h>
int main(){
    int arr[5]={1,2,3,4,5};
    int i;
    int *ptr=arr;
    for(i=0;i<5;i++){
        printf("%d ",*(ptr+i));
    }
}