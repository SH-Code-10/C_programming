#include<stdio.h>

int reverse(int n){
    int rem,result=0;
    while(n!=0){
        rem=n%10;
        result=result*10+rem;
        n/=10;
        
    }
    return result;
}
int main(){
    int n=12389;
    printf("%d",reverse(n));

}