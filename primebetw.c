#include<stdio.h>
int isprime(int n){
   

}
int main(){
    int i,j;
    
    for(i=1;i<=100;i++){
         int j;
    int prime =1;
     for(j=2;j<i;j++){
        if(i%j==0){
            prime=0;
            break;
            
            
        }
        
    }
    if(prime==1){
        printf("%d ",i);
    }
        
    }

}