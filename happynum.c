#include<stdio.h>
int isHappy(int n){
    while(n!=1){
    
    int result=0;
    while(n!=0){
        int rem=n%10;
       result=rem*rem+result;
        n/=10;
    }n=result;
  if(n==4){  //all the sad number ends with 4 so here we apply the base condition//
    return 0;
    
  }}
  return 1;
     
}
int main(){
    
    int num;
  int i;
  for(i=1;i<=100;i++){
    if(isHappy(i)){
        printf("%d ",i);
    };
  }

   
}
