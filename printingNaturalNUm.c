#include<stdio.h>
int natural(int n){
    int a;
    if(n==1){
        printf("%d ",n);
        return 1;
    } natural(n-1);
     printf("%d ",n);
      }
int main(){
    int n=10;
    natural(n);
}