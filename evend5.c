// #include<stdio.h>
// int findsum(int);
// int main(){
//     int n;
//     printf("Enter the number n : ");
//     scanf("%d",&n);
//     printf("%d",findsum(n));
// }
// int findsum(int num){
//     int i=0,temp=0;
//     while(i<=num){
//         if(i%5==0){
//             temp += i;
//         }
//         i = i + 2;
//     }
//     return temp;
// }

   #include<stdio.h>
   int main(){
    int arr[10],i,temp=0;
    float avg;
    int *ptr = arr;
    printf("Enter the marks : \n");
    for(i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<10;i++){
        temp = temp + *(ptr + i);
    }
    avg = (float)temp/10;
    printf("%.1f",avg);
    return 0;
   }