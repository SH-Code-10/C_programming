#include<stdio.h>
int main(){
    char name[10]="shishir";
    char surname[10]="shrestha";
    int count=0,bcount=0;
    char concat[100];
    while(name[count]!='\0'){
        concat[count]=name[count];
        count++;


    }
    concat[count]=' ';
    count++;
    
    while(surname[bcount]!='\0'){
        concat[count]=surname[bcount];
        bcount++;
        count++;


    }
    concat[count]='\0';
    printf("%d ",count);
    printf("%s ",concat);

}