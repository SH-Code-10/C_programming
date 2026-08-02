#include<stdio.h>
int main(){
    int i,j,n=6;
    for(i=0;i<n;i++){
        for(int space=0;space<n-(i+1);space++){
            printf("   ");
        }
        for(j=0;j<(2*i+1);j++){
            if(j==0||j==(2*i)||i==n-1){
            printf(" * ");}
            else{
                printf("   ");
            }



        }
        printf("\n");
    }
}