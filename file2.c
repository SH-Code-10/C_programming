#include<stdio.h>
int main(){
    char value;
    FILE *ptr,*upper,*lower;
    ptr=fopen("string.txt","w");
    char sen[100]="HELLo NO my god";
    fprintf(ptr,"%s",sen);
    fclose(ptr);
    ptr=fopen("string.txt","r");
    upper=fopen("upper.txt","w");
    lower=fopen("lower.txt","w");
    if(ptr==NULL||upper==NULL||lower==NULL){
        printf("error");
        return 1;
    }
    while(fscanf(ptr,"%c",&value)!=EOF){
        if(value>='A'&&value<='Z'){
            fprintf(upper,"%c",value);
        }
        else if(value>='a'&&value<='z'){
            fprintf(lower,"%c",value);
        }
    }
    fclose(upper);
    fclose(lower);
    fclose(ptr); 


}