// #include<stdio.h>
// int main(){
//     int n=5;
//     int i,j;
//     for(i=0;i<5;i++){
//         for(j=n;j>n-(i+1);j--){
//             printf("%d ",j);


//         }
//         printf("\n");
//     }
// }
#include<stdio.h>
int main(){
    int n;
    int i,j;
    for(i=0;i<5;i++){
        n=5;
        for(j=0;j<i+1;j++){
            printf("%d ",n);
            n--;


        }
        printf("\n");
    }
}