#include<stdio.h>
#include<math.h>
int pR(int n,int i){
    if(i==0){
        return 1;
    }
    return n*pR(n,i-1);
    
}
int main(){
    int n=4,i=3;
    printf("Result: %d",pR(n,i));
}