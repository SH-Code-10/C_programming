#include<stdio.h>
#include<math.h>
int fact(int n){
    int i,result=1;
    for(i=1;i<=n;i++){
     result=result*i;
    }
    return result;
}
// float power(float n,float p){
//    float result=1,i;
//     for(i=1;i<=p;i++){
//         result*=n;
//     }
//     return result;
// }
int main(){
    float result=0;
    int sign=1;
    float deg=90;
    float x=deg*3.14/180;
    for(int i=0;i<=10;i+=2){
        result+=((sign*pow(x,i))/fact(i));
        sign=-1*sign;

    }
    printf("cos%.1f=%f",deg,result);
}