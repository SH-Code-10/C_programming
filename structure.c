#include<stdio.h>
struct students{
    char name[10];
    int marks;
}s[4];
int main(){
    int i;
    for(i=0;i<4;i++){
        scanf("%s %d",&s[i].name,&s[i].marks);
    }
    for(i=0;i<4;i++){
        if(s[i].marks>24){
            printf("%s %d",s[i].name,s[i].marks);
        }
    }
}