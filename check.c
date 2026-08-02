#include<stdio.h>
int main(){
    int a=2,b=3;
    int c,d,e,f;
    c=a++ - ++b + ++a;
    d=++c*b--;
    e=(c>d)?a:b;
    f=e++;
    printf("%d %d %d %d",c,d,e,f);
}