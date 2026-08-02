#include<stdio.h>
int power(int n,int p){
    int i,result=1;
    for(i=1;i<=p;i++){
        result=result*n;
    }
    return result;
}
int main(){
    int n=3;
    printf("square of 3 is %d",power(n,4));
}