#include<iostream>
using namespace std;
int arrs(int arr[3][3],int size){
     int sum=0,i,j;
    for(  i=0;i<size;i++){

        for(j=0;j<size;j++){
            if(arr[i][j]%2==0){
                sum=sum+arr[i][j];

            }
        }
    }
    return sum;

}
int main(){
    int arr[3][3],i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int result=arrs(arr,3);
    cout<<"Sum = "<<result;

   
}