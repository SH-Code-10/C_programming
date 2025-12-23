#include<stdio.h>
int main(){
    int n,i;
    printf("enter the number which you want");
    scanf("%d",&n);
    int a=0,b=1,c=0;
    printf("%d\t%d\t",a,b);
    for( i=2;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        printf("%d\t",c);
    }
}