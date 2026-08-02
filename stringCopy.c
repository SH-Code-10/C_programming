#include<stdio.h>
int main(){
    char name[10]="Shishir";
    char temp[10];
    
    int count=0;
    int i;
    while(name[count]!='\0'){
       temp[count]=name[count];
       count++;
    }
    

    printf("%s ",temp);
}