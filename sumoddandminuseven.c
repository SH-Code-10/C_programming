// #include<stdio.h>
// int sumodd(int n){
//     int i,result=0;
//     for(i=1;i<=n;i+2){
//         result+=i;
//     }
//     return result;

// }
// int minuseven(int n){
//     int i,result=0;
//     for(i=0;i<=n;i+2){
//         result-=i;
//     }
//     return result;
// }
// int total(n){
    
    
// }
#include<stdio.h>
int main(){
    int sign=1;
    int i,result=0,n=20;
    for(i=1;i<=n;i++){
        result+=sign*i;
        sign=-1*sign;
    }
    printf("%d ",result);
}