#include<stdio.h>
int factorial(int n){
    int i,result=1;
    for(i=1;i<=n;i++){
        result=result*i;
        
    }
    return result;
}
float power(float n,float p){
    float i,result=1;
    for(i=1;i<=p;i++){
        result=result*n;
    }
    return result;
} 
int main(){
    
    int sign=1;
   float i,n,result=0;
    float deg=45;
    float x=deg*3.14/180;

    for(i=1;i<=10;i=i+2){
        result+=(sign*power(x,i))/factorial(i);
        sign=-1*sign;


        
    }
printf("%f",result);

}