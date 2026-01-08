#include<stdio.h>
int main(){
    int n,i,prime=0;
    printf("enter the number to check prime ");
    scanf("%d",&n);
    if(n<1){
        printf("0 is neither prime nor composite");
    }
    for(i=2;i<n/2;i++){
        if(n%i==0){
            prime++;

        }
    }
    if(prime==0){
        printf("%d is prime number",n);
    }else{
        printf("%d is not prime number",n);
    }

}