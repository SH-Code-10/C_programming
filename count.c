
#include<stdio.h>

int main(){
    char sen[100]= "hello I am shishir";
    int i=0;
    int largest ;
    while(sen[i]!= '\0' ){
        if(sen[i]!= ' '){
            printf("%c",sen[i]);
        }
        else{
    largest=i;

        }
        i++;
    }
    
    
    return 0;
}