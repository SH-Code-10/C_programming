#include<stdio.h>
int main(){
    char value;
    char source[10],destination[10];
    FILE *fp,*fp1;
    printf("enter file source and destination");
    scanf("%s%s",source,destination);
    fp=fopen(source,"r");
    fp1=fopen(destination,"w");
    if(fp==NULL||fp1==NULL){
        printf("error");
        return 1;
    }
    while(fscanf(fp,"%c",&value)!=EOF){
        fprintf(fp1,"%c",value);
    }
    fclose(fp);
    fclose(fp1);
}